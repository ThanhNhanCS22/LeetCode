void swap1(char * s1, char* s2, int *result, int index1, int index2 ){
    char temp = s1[index1] ; 
    s1[index1] = s2[index2] ; 
    s2[index2] = temp ; 
    *result +=1 ; 
}

int minimumSwap(char* s1, char* s2) {
    int result = 0; 
     
    int count = 0; 
    int len = strlen(s1) ;  
    for (int i =  0 ; i < len -1 ; i ++  ) { 
        int check = 0 ;
        if(s1[i] == s2[i] ) continue ; 
        for (int j = i+1 ; j < len ; j++ ){ 
            if(s1[j] == s2[j]) continue ; 
            if (s1[j] == s1[i]){
                
                swap1(s1,s2 ,&result, i, j )  ;
                check = 1 ; 
                break ; 
            }   
        }
        if(check == 0  ) count += 1 ;   
        
        
    }
    if(s1[len-1] != s2[len-1] ) count++;  
    if (count == 1 ) return -1 ; 
    if(count ==2 ) result +=2 ;   
   
    return result ;   
}
