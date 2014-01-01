i = 1
j = 1
k = 1
s1 = 0
s2 = 0
s3 = 0

while i <= 100
  s1 = s1+ i
  i += 1
  #puts "s1: ", s1
  end

while j <= 50
s2 = s2 + j*j
j +=1
  #puts "s1: ", s2
end

while k <= 10
  s3 = s3 + 1/k.to_f
  k += 1
  #puts "s3: ", s3
end 
sum = s1 + s2 + s3
puts sum
puts s2
puts "s1: ",s1
puts s3
