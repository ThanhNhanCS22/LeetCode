void addString(char* array, char s, int *n  ){
    array[*n] = s; 
    *n = *n + 1  ; 
       

}
char* longestCommonPrefix(char** strs, int strsSize) {
    char* result = malloc(200 * sizeof(char)); 
    memset(result, 0, 200); 

    int index = 0 ;
     
    int check_len1 = strlen(strs[0]); 
    while(index <= check_len1 ){ 

        for(int i = 1 ; i < strsSize; i++) {
       
            int check_len2 = strlen(strs[i]) ; 

            if(index > check_len1-1  || index > check_len2-1 || strs[0][index] !=  strs[i][index]) {
                if(index == 0 ) return "" ; 
                else return result ; 
            }
             
        }
        addString(result, strs[0][index],&index   ) ; 


    }
    return result ; 
}
