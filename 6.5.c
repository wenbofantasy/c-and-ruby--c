#include <stdio.h>
main()  
{
  double i=1,j=1,k=1,s1=0,s2=0,s3=0,sum;  
  for(;i<=100;i++) s1=s1+i;  
  for(;j<=50;j++) s2=s2+j*j;  
  for(;k<=10;k++) s3=s3+1/k;  
  sum=s1+s2+s3; 
  printf("sum=%f\n",sum); 
  printf("sum=%f\n",s1); 
  printf("sum=%f\n",s2); 
  printf("sum=%f\n",s3); 
}  

/*
 bob@hp:c_and_ruby_exercises$ gcc 6.5.c -o 6.5
 bob@hp:c_and_ruby_exercises$ ./6.5
 sum=47977.928968
*/
