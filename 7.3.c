/*
 求一个3×3矩阵对角线元素之和。  
*/

#include <stdio.h>
main()  
{
  int i=0,j=0,a[3][3],s1,s2;  
  for(i=0;i<3;i++)  
    for(j=0;j<3;j++)  
      scanf("%d",&a[i][j]);  
  s1=a[0][0]+a[1][1]+a[2][2];  
  s2=a[0][2]+a[1][1]+a[2][0];  
  printf("s1=%d,s2=%d\n",s1,s2);  
}  

/*
 bob@hp:c_and_ruby_exercises$ gcc 7.3.c -o 7.3
 bob@hp:c_and_ruby_exercises$ ./7.3
 1 2 3 4 5 6 7 8 9 
 s1=15,s2=15
*/
