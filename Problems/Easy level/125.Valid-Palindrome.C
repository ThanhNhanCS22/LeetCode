bool isPalindrome(char* s) {
    int len = strlen(s); 
    int left = 0 , right = len -1 ; 
 
    while(left< len  && !isalnum(s[left]) ) left++ ; 
    while( right >= 0 && !isalnum(s[right])  ) right-- ; 
    while(left< right){
        if (tolower(s[left]) != tolower(s[right]) ) return 0 ; 
        left++ ; 
        right-- ; 
        while(left <len && !isalnum(s[left]) ) left++ ; 
        while(right>=0 && !isalnum(s[right]) ) right-- ;  
    }
    return 1 ; 

}
