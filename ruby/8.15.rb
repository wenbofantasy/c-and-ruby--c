s = []
a = { 3 => "Li", 5 => "Wang", 2 => "Chen", 4 => "Liu", 6 => "Xie", 8 => "Ma", 9 => "Zhou", 12 => "Zhang", 23 => "Yuan", 24 => "Lu"}
 a.each do |key, value|
   #puts key
   s << key
    
 end
 puts s.sort
