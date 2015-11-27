#!/usr/bin/env ruby

require 'rubygems'

require 'set'
require 'uri'

require 'mechanize'
require 'redis'

agent = Mechanize.new { |agent|
	agent.user_agent_alias = 'Mac Safari'
}
baseUrl = ARGV[0]

uncheckUrls = Set.new [baseUrl]
urlPool = uncheckUrls.flatten

redis = Redis.new
if !(redis.ping == "PONG")
	throw "The redis server weren't found (./redis-server &)."
end

i = 0
while uncheckUrls.empty? === false
	url = uncheckUrls.take 1
	uncheckUrls.subtract url

	url = url[0]
	agent.get(url) do |page|
		page.links.each do |t_link|
			if t_link.href === nil
				link = nil
			elsif t_link.href =~ /\A#{URI::regexp(['http', 'https'])}\z/
				link = t_link.href
			else
				link = url + t_link.href
				if (link =~ /\A#{URI::regexp(['http', 'https'])}\z/) === nil
					link = nil
				end
			end

			if link != nil
				link.slice! /\#(.)*/
				if urlPool.add?( URI.parse( link ).to_s ) != nil
					## only clean urls and not done goes here.
					uncheckUrls.add link
				end
			end
			pp link
		end

		# redis.sadd "urlPool", url
		# redis.sadd "item_" + i.to_s, url
		# redis.sadd "item_" + i.to_s, page.at('meta[name="description"]')[:content]
		# redis.sadd "item_" + i.to_s, page.at('meta[name="keywords"]')[:content]

		i += 1

		# pp urlPool
	end
end
