bool wordPattern(char* pattern, char* s) {
    char *hashTable[26] ; 
    int  start  = 0 , move = 0 , patternIdx = 0 ; 
    while(move < strlen(s) + 1   && pattern[patternIdx] != '\0') {
        if(s[move] == ' ' || s[move] == '\0'){
            char temp[move - start +1 ] ; 
            strncpy(temp, s + start, move - start );
            temp[move - start] = '\0' ; 
            for (int i = patternIdx - 1 ; i >=0 ; i-- ) {
                if(strcmp(hashTable[pattern[i]-'a'],temp  ) == 0 && pattern[i] != pattern[patternIdx]){  
                    return 0 ; 
                } 
            } 
            if(  !(hashTable[pattern[patternIdx] - 'a' ])  ) {
                hashTable[pattern[patternIdx] - 'a' ] = malloc((move -start  +1 )*sizeof(char)) ;
                strncpy(hashTable[pattern[patternIdx] - 'a' ], s + start, move - start  );
                hashTable[pattern[patternIdx] - 'a'][move - start] = '\0' ; 
            }
            else { 
                if (  strcmp(temp, hashTable[pattern[patternIdx] - 'a' ] ) != 0  ) {
                   
                    return 0  ; 
                }
            }
            
            patternIdx++ ;
            start = move + 1 ;  

        } 
        move ++ ; 
    }
     
    if(pattern[patternIdx] != '\0' ||  s[move-1] != '\0')  return 0 ; 
    return 1 ;  

}
