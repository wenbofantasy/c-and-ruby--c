score = 85
 case  
           when score >= 90
             puts 'A'  
           when  score >= 80 && score < 90
             puts 'B'  
           when score >= 60 && score < 79
             puts 'C'  
           when score < 60
             puts 'D'  
           else
             puts 'wrong number'  
           end  
