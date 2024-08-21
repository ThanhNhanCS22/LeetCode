void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int checkFirstRow  = 0 , checkFirstCol = 0 ; 
    for(int i = 0 ; i < matrixColSize[0] ; i++){
        if( !matrix[0][i]  ){
            checkFirstRow = 1 ; 
            break ; 
        } 
    }

    for(int i = 0 ; i < matrixSize ; i++){
        if( !matrix[i][0]  ){
            checkFirstCol = 1 ; 
            break ; 
        } 
    }

    for(int i = 1; i < matrixSize ; i ++){
        for(int j = 1 ; j < matrixColSize[0] ; j++) {
            if( !matrix[i][j] ) {
                matrix[i][0] = 0 ; 
                matrix[0][j] = 0 ; 
            } 
        }
    }
    for (int i = 1 ; i< matrixColSize[0] ; i++){
        if( !matrix[0][i]  ) {
            for(int j = 1 ; j < matrixSize ; j++) matrix[j][i] = 0 ;
        }
    }
    

    for(int i = 1 ; i < matrixSize ; i++){
        if(!matrix[i][0]){
            
            for(int j = 1 ; j < matrixColSize[0] ; j++) matrix[i][j] = 0 ;
         
        } 
    }
    if(checkFirstRow) {
        matrix[0][0] = 0 ; 
        for(int i = 1 ; i < matrixColSize[0] ;  i++ ) matrix[0][i] = 0 ;   
    }
    if(checkFirstCol){
        matrix[0][0] = 0 ; 
        for(int i = 1 ; i < matrixSize ;  i++ ) matrix[i][0] = 0 ;    
    }

}
