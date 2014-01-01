/*
 求前20项阶乘之和，（即求1!+2!+3!+4!+5!+…+20!）  
*/
#include <stdio.h>
main()  
{
  float s=0,t=1;
  int n;  
  for(n=1;n<=20;n++)
  {
    t=t*n;
    s=s+t;
  }
  printf("1!+2!+3!+4!+5!+…+20!=%e\n", s);
}  

/*
 bob@hp:c_and_ruby_exercises$ gcc 6.4.c -o 6.4
 bob@hp:c_and_ruby_exercises$ ./6.4
 1!+2!+3!+4!+5!+…+20!=2.561327e+18
*/
