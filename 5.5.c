/*
 有一函数：  
 y = x (x<1); y = 2x-1 (1<=x<10); y = 3x-11 (x>=10);
 写一程序，输入x值，输出y值。
*/
#include <stdio.h>  
main()  
{
  int x,y;  
  printf("输入x：");  
  scanf("%d",&x);  
  if(x<1)                         /* x<1 */  
  { y=x;  
    printf("x=%3d,  y=x=%d\n",x,y);  
  }  
  else  if (x<10)                 /* 1≤x-10 */  
  { y=2*x-1;  
    printf("x=%3d,  y=2*x-1=%d\n",x,y);  
  }  
  else                     /* x≥10 */  
  { y=3*x-11;  
    printf("x=%3d,  y=3*x-11=%d\n",x,y);  
  }  
}  
/*
 bob@hp:c_and_ruby_exercises$ gcc 5.5.c -o 5.5
 bob@hp:c_and_ruby_exercises$ ./5.5 
 输入x：4
 x=  4,  y=2*x-1=7
 bob@hp:c_and_ruby_exercises$ ./5.5 
 输入x：-1 
 x= -1,  y=x=-1
 bob@hp:c_and_ruby_exercises$ ./5.5 
 输入x：20
 x= 20,  y=3*x-11=49
*/
