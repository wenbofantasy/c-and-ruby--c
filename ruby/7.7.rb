#!/usr/bin/env ruby
# -*- coding: utf-8 -*-
#
n = 5
LEN = 15
print "enter n(1--15):"
#n=gets.to_i
until (n>0 && n<LEN && n%2==1 )
  #n=gets.to_i
end
a2 = Array.new(n){Array.new(n)}

r=0
c=n/2
(1..n*n).each{|x|
  a2[r][c] = x
  r-=1
  r%=n
  c+=1
  c%=n

  if a2[r][c]
    r+=2
    r%=n
    c-=1
    c%=n
  end
}
a2.each{|x| p x}
