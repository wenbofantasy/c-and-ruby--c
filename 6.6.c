/*
 打印出所有"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该本身。例如：153是一个水仙花数，因为153=1^3+5^3+3^3。  
*/
#include <stdio.h>
#include"math.h"  
main()  
{
  int x=100,a,b,c;  
  while(x>=100&&x<1000) 
  {
    a=0.01*x;
    b=10*(0.01*x-a);
    c=x-100*a-10*b;  
    if(x==(a*a*a+b*b*b+c*c*c)) printf("%5d\n",x);x++;
  }  
}

/*
   bob@hp:c_and_ruby_exercises$ gcc 6.6.c -o 6.6
   bob@hp:c_and_ruby_exercises$ ./6.6
   153
   370
   371
   407
*/
