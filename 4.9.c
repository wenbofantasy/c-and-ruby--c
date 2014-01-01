/* 输入一个华氏温度，要求输出摄氏温度。公式为 c=5(F-32)/9 输出要求有文字说明，取位2小数。*/
#include <stdio.h>
void main()  
{
  float F,c;  
  scanf("%f",&F);  
  c=5*(F-32)/9;  
  printf("c=%.2f\n",c);  
} 

/*
 bob@hp:c_and_ruby_exercises$ gcc 4.9.c -o 4.9
 bob@hp:c_and_ruby_exercises$ ./4.9 
 78
 c=25.56
 bob@hp:c_and_ruby_exercises$
 */
