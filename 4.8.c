/* 4．8设圆半径r=1.5，圆柱高h=3，求圆周长、圆面积、圆球表面积、圆球体积、圆柱体积。用scanf输入数据，输出计算结果，输出时要求文字说明，取小数点后两位数字。请编程序。  */
#include <stdio.h>
void main()  
{
  float r,h,C1,Sa,Sb,Va,Vb;  
  scanf("%f,%f",&r,&h);  
  C1=2*3.14*r;  
  Sa=3.14*r*r;  
  Sb=4*Sa;  
  Va=4*3.14*r*r*r/3;  
  Vb=Sa*h;  
  printf("C1=%.2f\n",C1);  
  printf("Sa=%.2f\nSb=%.2f\nVa=%.2f\nVb=%.2f\n",Sa,Sb,Va,Vb);  
}

/*
  bob@hp:c_and_ruby_exercises$ gcc 4.8.c  -0 4.8
  bob@hp:c_and_ruby_exercises$ ./4.8 
  1.5,3
  C1=9.42
  Sa=7.07
  Sb=28.26
  Va=14.13
  Vb=21.19
 */
