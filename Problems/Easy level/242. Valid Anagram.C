bool isAnagram(char* s, char* t) {
    int hashMap[26] = {0} ; 
    int countLetter = 0 ; 
    if(strlen(s) != strlen(t)) return 0 ; 
    for(int i = 0 ; s[i]!='\0'; i++ ) {
        hashMap[s[i] - 'a']++ ;
         
    } 
    for( int  i = 0 ; t[i] != '\0' ; i++ ){
        if(!hashMap[t[i] - 'a']) return 0 ; 
        hashMap[t[i] - 'a']-- ; 
    }
    return 1; 
}
