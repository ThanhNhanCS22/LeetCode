char* makeGood(char* s) {
    int i = 0 , j= 1, count = 0 ; 
    while(j<strlen(s))  { 
        while(i>= 0 && j< strlen(s) &&  s[i] != s[j] && toupper(s[i]) == toupper(s[j])) {
            s[i] = '0' ; 
            s[j] = '0' ;
            count+= 2; 
            do{ 
                i -- ; 
            }while(i>=0 &&  s[i] == '0') ;  
            
            j++ ; 

        }
        i = j ; 
        j ++; 
    } 
    char *result = malloc((strlen(s) - count+1 )*sizeof(char) ); 
    int indexResult = 0 ; 
    for (int k = 0 ; k < strlen(s) ; k++){
        if(s[k] != '0')  {
            result[indexResult] = s[k] ; 
            indexResult++; 
        }
    }
     result[indexResult] = '\0';
    return result ; 
}
/*
char* makeGood(char* s) {
    int n = strlen(s);
    int top = -1;
    for (int i = 0; i < n; i++) {
        if (top >= 0 && (s[i] ^ s[top]) == 32) {
            top--;
        } else {
            top++;
            s[top] = s[i];
        }
    }
    s[top + 1] = '\0';
    return s;
}
*/
//top 1 runtime 
