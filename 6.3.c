/*
 求Sn=a+aa+aaa+…+aa…aaa（有n个a）之值，其中a是一个数字。例如：2+22+222+2222+22222（n=5），n由键盘输入。
*/

#include <stdio.h>  
main()  
{
  int a,n,i=1,sum=0,tn=0;  
  printf("a,n=:");
  scanf("%d, %d",&a, &n);  
  while(i<=n)  
  {
    tn = tn +a;
    sum = sum + tn;
    a = a * 10;
    ++i;
  }  
  printf("sum=%d\n",sum);  
}  

/*
 bob@hp:c_and_ruby_exercises$ gcc 6.3.c -o 6.3
 bob@hp:c_and_ruby_exercises$ ./6.3 
 a,n=:2,5
 sum=24690
*/
