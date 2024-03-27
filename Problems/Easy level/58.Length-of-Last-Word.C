int lengthOfLastWord(char* s) {
    int len = strlen(s);   
    int startPos = len - 1 ; 
    int count  =0 ; 
    while(s[startPos] == ' '  ) startPos -- ;
    while(startPos >= 0 && isalpha(s[startPos])) {
        startPos--; 
        count++; 
    }
    return count ; 
}
