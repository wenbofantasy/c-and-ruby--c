/*
 打印“魔方阵”，所谓魔方阵是指这样的方阵，它的每一行、每一列和对角线之和均相等。例如，三阶魔方阵为  
 8   1   6  
 3   5   7  
 4   9   2  
 要求打印出由1～n2的自然数构成的魔方阵。  
*/

#include <stdio.h>  
main()  
{ 
  int a[16][16],i,j,k,p,m,n;  
  p=1;  
  while(p==1)                             /*要求阶数为1～15的商数*/  
  { 
    printf("Enter n(n=1～15)：");  
    scanf("%d",&n);  
    if((n!=0)&&(n<=15)&&(n%2!=0))  p=0;  
  }  
  for(i=1;i<=n;i++)                      /*初始化*/  
    for(j=1;j<=n;j++)  a[i][j]=0;  
  j=n/2+1;                               /*建立魔方阵*/  
  a[1][j]=1;  
  for(k=2;k<=n*n;k++)  
  {
    i=i-1;  
    j=j+1;  
    if((i<1)&&(j>n))  
    { 
      i=i+2;  
      j=j-1;  
    }  
    else  
    { 
      if(i<1)  i=n;  
      if(j>n)  j=1;  
    }  
    if(a[i][j]==0)  a[i][j]=k;  
    else  
    {
      i=i+2;  
      j=j-1;  
      a[i][j]=k;  
    }  
  }  
  for(i=1;i<=n;i++)                      /*输出魔方阵*/  
  { 
    for(j=1;j<=n;j++)  
    printf("%4d",a[i][j]);  
    printf("\n");  
  }  
}  

/*
   bob@hp:c_and_ruby_exercises$ gcc 7.7.c -o 7.7
   bob@hp:c_and_ruby_exercises$ ./7.7
   Enter n(n=1～15)：5
   17  24   1   8  15
   23   5   7  14  16
   4   6  13  20  22
   10  12  19  21   3
   11  18  25   2   9
*/
