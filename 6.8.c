/*
 有一分数序列：  2/1, 3/2, 5/3, 8/5, 13/8, 21/13 ...
 　　   
 求出这个数列的前20项之和。
*/

#include <stdio.h>
main()  
{
  int i=1;
  long int n;
  double t,x=1,y=2,s,sum=0;  
  scanf("%ld",&n);  
  while(i<=n)
  {
    s=y/x;
    sum=sum+s;
    t=y;
    y=y+x;
    x=t;
    i++;
  }  
  printf("%f\n",sum);  
}  

/*
 bob@hp:c_and_ruby_exercises$ ./6.8
 20
 32.660261
*/
