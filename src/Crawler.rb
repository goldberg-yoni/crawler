#!/usr/bin/env ruby

require 'rubygems'
require 'mechanize'

a = Mechanize.new { |agent|
	agent.user_agent_alias = 'Mac Safari'
}

a.get(ARGV[0]) do |page|
	pp page.at('meta[name="description"]')[:content]
end
