i = 1
j = 1
k = 1
s1 = 0
s2 = 0
s3 = 0

while i <= 100
  i += 1
  s1 = s1+ i
  puts "s1: ", s1
  end

while j <=50
j +=1
s2 = s2 + j*j
  puts "s1: ", s2
end

while k <= 10
  k += 1
  s3 = s3 + 1/k
  puts "s1: ", s3
end 
sum = s1 + s2 + s3
puts sum
