/*
   写几个函数：①输个职工的姓名和职工号；②按职工号由小到大顺序排序，姓名顺序也随之调整；③要求输入一个职工号，用折半法找出该职工的姓名，从主函数输入要查找的职工号，输出该职工姓名。  
   */

#include<stdio.h>
#include<string.h>
#define M 100
int main()
{
  void sort(int num[10],char name[][M],int n);//声明排序函数；
  int search(int num[10],int n);              //声明寻找函数；
  int num[10];
  char name[10][100];
  int i,n,z,flag=1,c;
  for(i=0;i<10;i++)
  {
    printf("输入第%d位职工的号码:",i+1);
    scanf("%d",&num[i]);
    printf("输入第%d位职工的名字:",i+1);
    getchar();
    gets(name[i]);
  }        //输入员工信息；
  sort(num,name,10);                          //调用排序函数；
  for(i=0;i<10;i++)
  {
    printf("%d\t",num[i]);
    puts(name[i]);       //输出排序后的职工信息；
    printf("\n");
  }                    
  printf("\n");
  while (flag==1)
  {
    printf("input n:\n");
    scanf("%d",&n);
    z=search(num,n);                            //调用查找函数；            
    puts(name[z]);
    printf("continue or not(Y/N)?");
    getchar();
    c=getchar();
    if(c=='N' || c=='n')
      flag=0;

  }
  return 0;
}

void sort(int* num,char name[][M],int n)    //函数定义；
{
  int i,j,t;
  char k[M];
  for(i=0;i<=n-1;i++)
  {
    for(j=0;j<n-i-1;j++)                        //冒泡；
      if(num[j]>num[j+1])
      {
        t=num[j];
        num[j]=num[j+1];
        num[j+1]=t;
        strcpy(k,name[j]);
        strcpy(name[j],name[j+1]);
        strcpy(name[j+1],k);
      }
  }
}

int search(int num[10],int n)        //查找定义；
{
  int h,l,i;
  h=9;                           //折半法？（不太会，不知道对了没。。- -）；
  l=0;
  while(1)
  {
    i=(h+l)/2;
    if(num[i]==n || i+1>=h)break;
    if(num[i]>n) h=i;
    else l=i;
  }
  if(num[i]==n)
    return (i);
  else
  {
    printf("can not find No. %d!\n", n);
    return(-1);
  }
}

/*
bob@hp:c_and_ruby_exercises$ gcc 8.15.c -o 8.15
8.15.c: 在函数‘main’中:
8.15.c:21:5: 警告： 不建议使用‘gets’(声明于 /usr/include/stdio.h:638) [-Wdeprecated-declarations]
bob@hp:c_and_ruby_exercises$ ./8.15
输入第1位职工的号码:1
输入第1位职工的名字:Li
输入第2位职工的号码:2
输入第2位职工的名字:Wang
输入第3位职工的号码:5
输入第3位职工的名字:Liu
输入第4位职工的号码:8
输入第4位职工的名字:Ma
输入第5位职工的号码:4
输入第5位职工的名字:Chen
输入第6位职工的号码:10
输入第6位职工的名字:Zhou
输入第7位职工的号码:12
输入第7位职工的名字:Zhang
输入第8位职工的号码:6
输入第8位职工的名字:Xie
输入第9位职工的号码:23
输入第9位职工的名字:Yuan
输入第10位职工的号码:34
输入第10位职工的名字:Lu
1       Li

2       Wang

4       Chen

5       Liu

6       Xie

8       Ma

10      Zhou

12      Zhang

23      Yuan

34      Lu


input n:
3
can not find No. 3!

continue or not(Y/N)?y
input n:
6
Xie
continue or not(Y/N)?n
*/
