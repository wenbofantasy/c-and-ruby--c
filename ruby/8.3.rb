#flag = 1
#i = 101
#j = 2
#while i < 200 && j <= Math.sqrt(200)
  #i += 1
  #flag = 1
    #j += 1
    #if i%j != 0
      #puts i
    #else 
      #" "
      ##break
    #end
    ##print "i", i, " "
    ##print "j", j, " "
      ##if flag == 1
        ##puts i
      #end
##end
##end
# E3.12-1.rb 求50以内的素数
$arr=[ ] #建立一个全局数组 $arr
$arr[0]=2

def add_prime(n) #定义方法 将 n以内的奇素数加入$arr
  3.step(n,2){|num|$arr <<num if is_prime?num }
end

def is_prime?(number) #定义方法 判断一个数是否是素数
  j=0 #数组下标
  while $arr[j] * $arr[j] <=number
    return false if number % $arr[j] ==0
    j +=1
  end
  return true
end

add_prime(200)
print $arr.join(", "),"\n" #转换成字符串输出
