int maxDepth(char* s) {
    int numOfOpenBracket = 0 ; 
    int result = 0   ; 
    for(int i = 0 ; i < strlen(s)   ; i ++  ) { 
        if(s[i] == '(') {
            numOfOpenBracket ++  ; 
            if (result < numOfOpenBracket ) result = numOfOpenBracket ; 

        }
        else if(s[i] == ')') numOfOpenBracket -- ; 
    } 
    return result ; 
    
}
