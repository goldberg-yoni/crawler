#!/usr/bin/env ruby

require 'rubygems'
require 'mechanize'

a = Mechanize.new { |agent|
	agent.user_agent_alias = 'Mac Safari'
}

a.get(ARGV[0]) do |page|
	pp page.at('meta[name="description"]')[:content]
	pp page.at('meta[name="keywords"]')[:content]
	i = e = 0
	page.links.each do |link|
		# puts link.href
		if link.href =~ URI::regexp
			i += 1
		end
		e += 1
	end
	pp i.to_s + "/" + e.to_s
end
