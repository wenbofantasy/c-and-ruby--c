/*
 用选择法对10个整数从小到大排序。 
*/

#include <stdio.h>
main()  
{
  int i,j,a[10],t;  
  for(i=0;i<10;i++)  
    scanf("%d",&a[i]);  
  for(j=1;j<10;j++)  
    for(i=0;i<=9-j;i++)  
      if(a[i]>a[i+1])   
      {
        t=a[i+1];
        a[i+1]=a[i];
        a[i]=t;
      }  
  for(i=0;i<10;i++)  
    printf("%5d",a[i]);  
  printf("\n");
}  

/*
 bob@hp:c_and_ruby_exercises$ gcc 7.2.c -o 7.2
 bob@hp:c_and_ruby_exercises$ ./7.2
 12
 3
 4321
 332
 221
 455
 333
 221
 5565
 332
     3   12  221  221  332  332  333  455 4321 5565
*/
