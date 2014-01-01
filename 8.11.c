/*
 写一函数用起泡法对输入的10个字符按由小到大的顺序排列。  
*/
#include <stdio.h>
int sort(int x[])  
{
  int i,j,t;  
  for(j=1;j<10;j++)  
    for(i=0;i<=9-j;i++)  
      if(x[i]>x[i+1])
      {
        t=x[i+1];x[i+1]=x[i];x[i]=t;
      }  
}  
main()  
{
  int y[10];int i;  
  for(i=0;i<10;i++)  
    scanf("%d",&y[i]);  
  sort(y);  
  for(i=0;i<10;i++)  
    printf("%5d",y[i]);  
  printf("\n");  
}  

/*
 bob@hp:c_and_ruby_exercises$ gcc 8.11.c -o 8.11
 bob@hp:c_and_ruby_exercises$ ./8.11
 11
 23
 4
 33
 22
 1
 34
 9 
 8
 7
     1    4    7    8    9   11   22   23   33   34
*/
