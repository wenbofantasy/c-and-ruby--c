/*
 猴子吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。第二天早上又将剩下的桃子吃掉一半，又多吃一个。以后每天早上都吃了前一天剩下的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘多少桃子。  
*/
#include <stdio.h>
main()  
{
  int day, x1, x2;
  day = 9;
  x2 = 1;
  while(day>0)
  {
    x1 = (x2+1) * 2;
    x2 = x1;
    day--;
  }
  printf("total=%d\n", x1);
}  

/*
 bob@hp:c_and_ruby_exercises$ gcc 6.10.c -o 6.10
 bob@hp:c_and_ruby_exercises$ ./6.10
 total=1534
*/
