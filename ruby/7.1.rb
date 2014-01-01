#$arr = [] # 全局变量，一个数组
#$arr[0] = 2 # 初始化数组

#def add_prime(n) # 定义一个方法，将小于n的素数加入数组
  #3.step(n, 2) { |num| $arr<< num if is_prime?num }
#end

#def is_prime?(number) # 判断一个数字是否为素数
  #j = 0 # 记录数组下标
  #while $arr[j] * $arr[j] <= number
    #return false if number % $arr[j] == 0
    #j += 1
  #end
  #return true
#end

#add_prime(100)
#puts $arr.join(",")
$arr=[ ]   
$arr[0]=2
def add_prime(n)      
  3.step(n,2){|num|$arr <<num if is_prime?num }
end
def   is_prime?(number)
     j=0              
     while $arr[j] * $arr[j] <=number
        return false if number % $arr[j] ==0
        j +=1
     end
     return true
end
add_prime(100)
print $arr.join(", "),"\n"
