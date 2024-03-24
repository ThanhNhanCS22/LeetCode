bool isValid(char* s) {
    int length = strlen(s);
  
    int temp = 0 ;
    if (length % 2 == 1 || length <2  ) { 
        return 0 ; 
    }
    for(int i = 0; i < length   ; i++  ) {
        
        if (s[i] == '(' || s[i] == '{' || s[i] == '['){
      
            continue ; 
        }
        else {   
            if(s[i] == ')'){
                int check_re =  0 ; 
                
                int check = 1 ;  
                for(int j = i -1 ; j >= 0 ; j --){
                    if(s[j] == ']' || s[j] == ')' || s[j] == '}'){
                                
                        check = check + 2  ;            
                    }
                    else if (s[j] == '(' && i - check == j ){
                       
                        temp = temp+ 2; 
                      
                        check_re = 1 ; 
                        break; 
                    }
                    
                }
                if (check_re == 0){
                    return 0 ; 
            
                }    
            }
            
            else if(s[i] == ']'){
                int check_re =  0 ; 
              
                int check = 1 ;  
                for(int j = i -1 ; j >= 0 ; j --){
                    if(s[j] == ']' || s[j] == ')' || s[j] == '}'){
                                       
                        check = check + 2 ;       
                    }
                    else if (s[j] == '[' && i - check == j ){              
                        temp = temp+ 2; 
                        check_re = 1 ; 
                        break; 
                    }
                    
                }
                if (check_re == 0){
                    return 0 ; 
            
                }    
            }
            else if(s[i] == '}'){
                int check_re =  0 ; 
            
                int check = 1 ;  
                for(int j = i -1 ; j >= 0 ; j --){
                    if(s[j] == ']' || s[j] == ')' || s[j] == '}'){
                         
                        check =  check + 2 ;          
                    }
                    else if (s[j] == '{' && i - check == j ){          
                        temp = temp + 2;               
                        check_re = 1 ; 
                        break; 
                    }
                    
                }
                if (check_re == 0){
                    return 0 ; 
            
                }    
            }            
        }
    }
    


    if(temp == length) {
        return  1 ; 
    }
    return 0 ; 
    

}
