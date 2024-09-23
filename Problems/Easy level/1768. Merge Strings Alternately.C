

char * mergeAlternately(char * word1, char * word2){
    int i = 0  , j  = 0 ;  
    int len1 = strlen(word1) ; 
    int len2 = strlen(word2 );  
    char* s = malloc((len1 + len2 +1 )*sizeof(char)  ); 
    while(i < len1 && j < len2 ) {
        if(i == j  ) s[(i++)+j] = word1[i]; 
        else s[i+(j++)] = word2[j];
    }  
    while(i< len1 ) s[(i++)+j] = word1[i]; 

    while(j < len2 )  s[i+(j++)] = word2[j]; 
    s[i+j] = '\0' ; 
    return s ;  
}
