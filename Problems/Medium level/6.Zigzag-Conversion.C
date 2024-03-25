
char* convert(char* s, int numRows) {
    if(numRows == 1){
        return s ; 
    }
    int len = strlen(s); 
    int indexArr[len] ; 
    char* result = (char*)malloc((len+1)*sizeof(char)) ; 
    memset(result,0,len+1);
    int index = 0 ; 
    int convertSign = 0 ; 

    for(int i = 0 ; i< len ; i++){
        if(convertSign == 0 ) { 
            indexArr[i] = index ;  
            index++ ; 

        }
        else if (convertSign == 1 ){
            indexArr[i] = index ; 
            index -- ; 
        }
        if ( index == numRows - 1 ) convertSign = 1 ; 
        else if (index == 0) convertSign = 0 ;  
        
    }
    index = 0 ;
    convertSign = 0 ; 
    while(index <= numRows -1 ) {
        for (int i = 0 ; i < len ; i++){
            if(index == indexArr[i]) {
                result[convertSign] = s[i] ; 
                convertSign++; 

            }
        }
        index++; 
    }
    return result ; 
    
}
