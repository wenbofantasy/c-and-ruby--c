/*
 用筛法求之100内的素数。  
*/

#include <stdio.h>
void main()  
{ 
  int i,j,a[100];  
  for(i=2;i<100;i++)  
  { 
    a[i]=i;  
    for(j=2;j<=i;j++)  
    {
      if(j<i)  
        if(a[i]%j==0)  
          break;  
      if(a[i]-j==0)  
        printf("%5d",a[i]);  
    }  
  }  
  printf("\n");  
}  

/*
 bob@hp:c_and_ruby_exercises$ gcc 7.1.c -o 7.1
 bob@hp:c_and_ruby_exercises$ ./7.1
     2    3    5    7   11   13   17   19   23   29   31   37   41   43   47   53   59   61   67   71   73   79   83   89   97
*/
