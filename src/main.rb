#!/usr/bin/env ruby

# if __FILE__ == $0
# 	ARGV.each do|a|
# 		puts "Argument: #{a}"
# 	end
# end

require 'optparse'

options = {}
OptionParser.new do |opts|
  opts.banner = "Usage: example.rb [options]"

  opts.on("-l", "--language", "Language tree file") do |v|
    options[:verbose] = v
  end
end.parse!

p options
p ARGV
