x = 100
while x >= 100 && x < 1000
  a= 0.01*x
  b= 10*(0.01*x-a)
  c= x-100*a-10*b  
  #puts a
  #puts b
  #puts c
  s1 = a*a*a
  s2 = b*b*b
  s3 = c*c*c
  #if x==(a*a*a+b*b*b+c*c*c)
  #if x != s1 + s2 + s3
  if x == s1 + s2 + s3
    puts x
    x += 1
  end
end
