int numJewelsInStones(char* jewels, char* stones) {
    char* hashMap = calloc(130,sizeof(char)); 
    int result = 0 ; 

    for(int i = 0 ; jewels[i] != '\0'; i++) hashMap[jewels[i]] = 1; 
      
    for(int i = 0; stones[i] != '\0' ; i++){
        if(hashMap[stones[i]]) result++ ;
    } 
    free(hashMap);  
    return result ; 
}
