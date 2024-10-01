bool canArrange(int* arr, int arrSize, int k) {
    int *freq = calloc(k, sizeof(int) );  
    for(int i = 0 ; i < arrSize; i ++) {
        freq[((arr[i]%k)+k)%k]++ ; 
    }  
    if ( freq[0]%2 ) {
        free( freq) ; 
        return 0  ;
    } 
    int i = 1 , j = k -1 ; 
    while(i < j ) {
        if(freq[i] != freq[j]) {
            free(freq); 
            return 0 ;  
        }
        i++; 
        j--; 
    }  
    free(freq); 
    return 1 ; 
    
}
