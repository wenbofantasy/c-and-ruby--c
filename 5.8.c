/*
 企业发放的奖金根据利润提成。利润I低于或等于10万元时，奖金可提成10% ；利润高于10万元，低于20万元（100000<I≤200000）时，其中10万元按10%提成，高于10万元的部分，可提成7.5% ；200000<I≤400000时，其中20万元仍按上述办法提成（下同），高于20万元的部分按5%提成；400000<I≤600000时，高于40万元的部分按3%提成；600000〈I≤1000000时，高于60万的部分按1.5%提成；I>1000000时，超过100万元的部分按1%提成。从键盘输入当月利润I，求应发放奖金总数。要求：(1)用if语句编程序；(2)用switch语句编程序。  
*/

/*
  (1) 用if语句编程序。  
*/
   
/*#include <stdio.h>  */
/*main()  */
/*{ long i;  */
  /*float bonus,bon1,bon2,bon4,bon6,bon10;  */
  /*bon1=100000*0.1;                [>利润为10万元时的奖金<]  */
  /*bon2=bon1+100000*0.075;         [>利润为20万元时的奖金<]  */
  /*bon4=bon2+200000*0.05;          [>利润为40万元时的奖金<]  */
  /*bon6=bon4+200000*0.03;          [>利润为60万元时的奖金<]  */
  /*bon10=bon6+400000*0.015;        [>利润为100万元时的奖金<]  */
  /*printf("请输入利润i：");  */
  /*scanf("%ld",&i);  */
  /*if(i<=100000)  */
    /*bonus=i*0.1;                   [>利润在10万元以内按0.1提成奖金<]  */
  /*else  if(i<=200000)  */
    /*bonus=bon1+(i-100000)*0.075;    [>利润在10万至20万元时的奖金<]  */
  /*else  if(i<=400000)  */
    /*bonus=bon2+(i-200000)*0.05;     [>利润在20万至40万元时的奖金<]  */
  /*else  if(i<=600000)  */
    /*bonus=bon4+(i-400000)*0.03;     [>利润在40万至60万元时的奖金<]  */
  /*else  if(i<=1000000)  */
    /*bonus=bon6+(i-600000)*0.015;    [>利润在60万至100万元时的奖金<]  */
  /*else  */
    /*bonus=bon10+(i-1000000)*0.01;   [>利润在100万元以上时的奖金<]  */
  /*printf("奖金是%10.2f\n",bonus);  */
/*}  */

/*
 bob@hp:c_and_ruby_exercises$ gcc 5.8.c -o 5.8_if
 bob@hp:c_and_ruby_exercises$ ./5.8_if 
 请输入利润i：234000
 奖金是  19200.00
*/

/*
 (2) 用switch语句编程序。  

 输入利润i，确定相应的提成等级branch  
 根据branch确定奖金值  
 0    奖金=i*0.1  
 1    奖金=bon1+(i-105)*0.075  
 2    奖金=bon2+(i-2*105)*0.05  
 3      
 4    奖金=bon4+(i-4*105)*0.03  
 5      
 6    奖金=bon6+(i-6*105)*0.015  
 7      
 8      
 9      
 10    奖金=bon10+(i-106)*0.01  
 输出奖金  
*/

#include <stdio.h>  
main()  
{ long i;  
  float bonus, bon1, bon2, bon4, bon6, bon10;  
  int c;  
  bon1=100000*0.1;  
  bon2=bon1+100000*0.075;  
  bon4=bon2+200000*0.05;  
  bon6=bon4+200000*0.03;  
  bon10=bon6+400000*0.015;  
  printf("请输入利润i：");  
  scanf("%ld",&i);  
  c=i/100000;  
  if(c>10)  c=10;  
  switch(c)  
  { 
    case 0: bonus=1*0.1;break;  
    case 1: bonus=bon1+(i-100000)*0.075;break;  
    case 2 :  
    case 3: bonus=bon2+(i-200000)*0.05; break;  
    case 4:  
    case 5: bonus=bon4+(i-400000)*0.03;break;  
    case 6:  
    case 7:  
    case 8:  
    case 9: bonus=bon6+(i-600000)*0.015;break;  
    case 10: bonus=bon10+(i-1000000)*0.01;  
  }  
  printf("奖金是%10.2f\n",bonus);  
}  

/*
 bob@hp:c_and_ruby_exercises$ gcc 5.8.c -o 5.8_switch
 bob@hp:c_and_ruby_exercises$ ./5.8_switch 
 请输入利润i：234000
 奖金是  19200.00
*/
