void trimSpaces(char *str) {
    char *end;

    int count = 0 ;
    for(int i = 0 ; str[i] == ' '; i++  ){
        count ++;   
    }
    int j = 0 ; 
    int i = count ;
    for(; str[i]!= '\0'; i++ ){
        str[j++] = str[i] ;

    } 
    str[j] = '\0';  

    
    end = str + strlen(str) - 1;
    while (end > str && isspace((unsigned char)*end)) end--;

    
    *(end + 1) = '\0';
}

void removeMiddleSpaces(char* str) {
    int n = strlen(str);
    int j = 0;
    int spaceFound = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
            spaceFound = 0;
        } else if (!spaceFound) {
            str[j++] = ' ';
            spaceFound = 1;
        }
    }
    str[j] = '\0';
}



void reverse (char * s, int start, int end){
    int i = start ,  j =  end ; 
    char temp ; 
    while(i< j ){
        temp = s[i] ; 
        s[i++] = s[j ] ; 
        s[j--] = temp ;     
    } 
}

char* reverseWords(char* s) {
    int len = strlen(s); 
    
    
    reverse(s,0,len-1); 
    int start = 0 ;
    for(int i = 0 ;s[i] != '\0' ; i ++) {
        if(s[i] == ' ' ){
            reverse(s,start, i -1); 
            start = i+1 ; 
        } 
    }
    reverse(s,start, len-1) ;  
    trimSpaces(s) ; 
    removeMiddleSpaces(s);
    return s;   
}
