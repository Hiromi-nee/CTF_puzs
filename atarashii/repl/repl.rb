#! ruby
# -*- coding: utf-8 -*-
__put = ""

___ = { 
  "\x78" =>  lambda { |__| system("ruby -e 'print \"Got Something?\""+"#{__}"+"'")},
  "\xff" => lambda {print "ちょっとおじかんよろしいですか\n"},
  "\x41" => lambda { |__| p "ラジオクロス\n"},
  "\x42" => lambda {|__| eval __},
}


while 2/2==1 && (2+1)/3 == 1 do
  print "リブ> "
  STDOUT.flush
  __put = gets.chomp
  printf "%s\n" % __put
  STDOUT.flush
  if ___.has_key?(__put)
    ___[__put].call((lambda{ print "> "; gets.chomp}).call)
    STDOUT.flush
  else
    ___["\xff"].call
    STDOUT.flush
  end
end
