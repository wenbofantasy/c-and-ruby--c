n = 20
x = 1
i = 1
y = 2
sum = 0
  while i <= n
    s= y.to_f/x.to_f
    sum = sum+s
    t = y
    y = y+x
    x = t
    i += 1
puts sum
  end
