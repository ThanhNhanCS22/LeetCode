int strStr(char* haystack, char* needle) {
    int len1 = strlen(haystack);
    int len2 = strlen(needle) ; 
    int check = 0 ; 
    while(check <= len1 ) { 
        
        if(needle[0] == haystack[check]) {
            
            int check1 = 0 ; 
                for(int i = 1; i < len2; i++){
                    if(needle[i]!= haystack[i+check] ){
                        check1 = 1; 
                        break ;  
                    }
                }
            if(check1 == 1 ) {
                check++ ; 
                continue ; 
            }
            else {
                break ; 
            }     
            
        }
        else if (len1 - check < len2){
            return -1 ; 
        }
        else {

            check++ ; 
        }
    } 
    return check ; 

}
