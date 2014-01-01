#encoding: utf-8
i = 1500000;
bon1=100000*0.1;       
bon2=bon1+100000*0.075;
bon4=bon2+200000*0.05; 
bon6=bon4+200000*0.03; 
bon10=bon6+400000*0.015
if i<=100000
bonus = i*0.1;                   
  puts "奖金是: " , bonus
  elsif i<=200000 
    bonus = bon1 + (i-100000)*0.075;  
  puts "奖金是: " , bonus
  elsif i<=400000
    bonus = bon2 + (i-200000)*0.05;   
  puts  "奖金是: ", bonus
  elsif i <= 600000
    bonus = bon4 + (i-400000)*0.03;   
  puts "奖金是: ", bonus
  elsif i<=1000000
    bonus = bon6 + (i-600000)*0.015;   
  puts "奖金是: ", bonus
  else 
    bonus=bon10+(i-1000000)*0.01; 
  puts "奖金是: ", bonus
  end
