#! ruby
# -*- coding: utf-8 -*-
__put = ""

___ = { 
  "\x78" =>  lambda { |args| print "#{args}\n"},
  "\xff" => lambda {print "ちょっとおじかんよろしいですか\n"},
}



while true do
  print "リブ> "
  __put = gets.chomp
  printf "%s\n" % __put
  if ___.has_key?(__put)
    ___[__put].call("lol\x41lall\x42\n")
  else
    ___["\xff"].call
  end

end
