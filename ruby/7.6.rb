class Sanjiao
  def initialize(row)
    @row = row
  end
  def sanjiaoxing(temp)
    number = temp.length
    temp.each do |x|
      print x.to_s+' '
    end
    array = Array.new(number.to_i+1)
    0.upto(number.to_i) do |x|
      if x == 0                 #  两端的就不用求了，
        array[0] =1
      elsif  x == number.to_i
        array[number.to_i] = 1
      else
        array[x]=temp[x-1].to_i+temp[x].to_i    #根据上一个数组的结果得下一数组的值
      end
    end
    temp = array   #hauncunyixia
    puts " "
    if number.to_i < @row
      sanjiaoxing(temp)
    end
  end
end

temp = Array.new(1)
temp[0] =1
p = Sanjiao.new(15)
p.sanjiaoxing(temp)

