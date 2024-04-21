int scoreOfString(char* s) {
    int result = 0 ; 
    for(int i = 1 ; i < strlen(s) ; i ++  ) { 
        result += abs((int)s[i] - (int)s[i-1] )   ; 
    } 
    return result;  
}
