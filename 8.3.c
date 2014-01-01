/*
 如何求素数  1． 自然数是0，1，2……  2． 素数是2，3，5……（不包括1的只能背1和它本身整除的自然数）
*/

#include<stdio.h> 
#include <math.h> 
void main() 
{ 
  int i ,j, flag=1; 
  for(i=101; i<200; i++) 
  { 
    flag = 1;
    for(j=2; j<=sqrt(200); j++)    
      if(i%j == 0)
      { 
        flag = 0;   
        break;     
      }   
    if(flag == 1) 
      printf("i=%d是素数\n",i);
  } 
} 

/*
 bob@hp:c_and_ruby_exercises$ gcc 8.3.c -o 8.3
 bob@hp:c_and_ruby_exercises$ ./8.3
 i=101是素数
 i=103是素数
 i=107是素数
 i=109是素数
 i=113是素数
 i=127是素数
 i=131是素数
 i=137是素数
 i=139是素数
 i=149是素数
 i=151是素数
 i=157是素数
 i=163是素数
 i=167是素数
 i=173是素数
 i=179是素数
 i=181是素数
 i=191是素数
 i=193是素数
 i=197是素数
 i=199是素数
*/
