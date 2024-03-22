int lengthOfLongestSubstring(char* s) {
    int len = strlen(s) ;
    if (len == 1) return 1 ; 
    if (len == 0 ) return 0 ; 
    int head = 0 ; 
    int max = 0 ; 
    
    int move = 0  ;  
    int count = 1 ; 
     
    while(move < len && head < len -1  ){ 
        move = move + 1 ; 
        int check  = 0 ;
        for (int j = head ; j < move  ; j++ ){
            if(s[move] != s[j]) {
                continue ; 
            }
            else {
                head = j + 1 ;
                move = head ; 
                check = 1 ;
                if (count > max) max = count ; 
                break ; 
            }

        }
        if (check == 0 ) count++ ; 
        else count = 1; 
        if (move == len -1 ) break ; 

    }
    if (count > max) max = count ;  
    return max ; 
}
