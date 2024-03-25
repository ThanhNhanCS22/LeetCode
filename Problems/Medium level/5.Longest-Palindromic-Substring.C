
char* longestPalindrome(char* s) {
    int max = 1 ; 
    int len = strlen(s) ; 
    int head ; 
    int tail ; 
    char *result = (char*)malloc(1001*sizeof(char)) ; 
    memset(result,0,1001) ; 
    if (len < 3){
        if(len == 2 && s[0] != s[1]) {
             
            result[0] = s[0] ; 
            return result; 
        }

        else if (len == 1  ) {
            return s ; 
        }
        else { 
            return s ; 
        }
    }
    for (int i = 0 ; i < len-2  ; i ++ ) {
        int count =  1 ;
      
        int left ; 
        int right  ; 
        if (s[i] == s[i+1]  ) {
            count =  2 ; 
            left = i -1 ; 
            right = i + 2 ;
            while( left >= 0 && right <len ) {
                if (s[left] == s[right]){
                    count =count + 2 ; 
                    left -- ; 
                    right ++; 
                } 
                else break ;
            }
        
        } 
        if(s[i] == s[i+2])  {
            int count_2 = 3 ; 
            int left_2 = i -1 ; 
            int right_2 = i + 3 ;  
            while( left_2 >= 0 && right_2 <len ) {
                if (s[left_2] == s[right_2]){
                    count_2 =count_2 + 2 ; 
                    left_2 -- ; 
                    right_2 ++; 
                } 
                else break ;   
            }
            if (count_2 > count ) {
                count = count_2 ;  
                left = left_2 ; 
                right = right_2 ;   
            }        
        }
        if (count > max ){
            left++ ; 
            right--;
            max = count ; 
            head = left ; 
            tail = right ; 
        }
    }
    
    if ( s[len -2 ] == s[len -1] && max == 1 ) {
        result[0] = s[len-2] ;
        result[1] = s[len-1] ; 
        return result ; 
        
    } 
    else if(max ==1 ) { 
        result[0] = s[0];
        return result ; 
    }


    max = 0 ; 
    for(int i = head ; i <= tail ; i++) { 
         
        result[max] = s[i] ; 
        max++ ; 
    }
    return  result  ; 
}
