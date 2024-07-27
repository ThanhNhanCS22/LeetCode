bool canConstruct(char* ransomNote, char* magazine) {
    int hashMap[26];
    memset(hashMap,0, sizeof(int)*26 );   

    for (int i= 0 ; i < strlen(magazine) ; i ++ ) { 
        hashMap[magazine[i] - 'a' ]++; 

    } 
    for(int i = 0 ; i < strlen(ransomNote); i++ ){
        if(hashMap[ransomNote[i] - 'a' ]  ) hashMap[ransomNote[i] - 'a' ] -- ; 
        else return 0 ; 
    } 
    return 1 ; 
}
