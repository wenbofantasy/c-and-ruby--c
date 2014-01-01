def daffodil 
  for i in (1..9) 
    for j in (0..9) 
      for k in (0..9) 
        x=i*100+j*10+k 
        y=i**3+j**3+k**3 
        if x==y 
          puts x 
        else 
          k+=1 
        end 
      end 
    end 
  end 
end 
daffodil    
