/*
  给一个百分制成绩，要求输出等级’A’、’B’、’C’、’D’、’E’。90分以上为’A’，80~90分为’B’，70~79分为’C’，60分以下为’D’。
*/
#include <stdio.h>  
main(){ 
  float score;  
  char grade;  
  printf("请输入学生成绩：");  
  scanf("%f",&score);  
  while(score>100||(score<0))
  { 
    printf("\n输入有误,请重新输入：");  
    scanf("%f",&score);  
  }  
  switch((int)(score/10))  
  {
    case 10:  
    case 9: grade='A';break;  
    case 8: grade='B';break;  
    case 7: grade='C';break;  
    case 6: grade='D';break;  
    case 5:  
    case 4:  
    case 3:  
    case 2:  
    case 1:  
    case 0: grade='E';  
  }  
  printf("成绩是%5.1f，相应的等级是%c。\n",score,grade);  
}  
/*
 bob@hp:c_and_ruby_exercises$ gcc 5.6.c -o 5.6
 bob@hp:c_and_ruby_exercises$ ./5.6
 请输入学生成绩：90.5
 成绩是 90.5，相应的等级是A。
 bob@hp:c_and_ruby_exercises$ ./5.6
 请输入学生成绩：59
 成绩是 59.0，相应的等级是E。
*/
