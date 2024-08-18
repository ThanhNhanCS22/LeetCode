

bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    
    int num ; 
    for(int i = 0 ; i < 9 ; i ++) { 
        int *hashRows = calloc(10,sizeof(int) ) ;
        for (int j = 0 ; j < 9 ; j++){
            if (board[i][j] == '.') continue  ;  
            else num = board[i][j] - '0' ; 
            hashRows[num] ++ ; 
            if (hashRows[num] > 1 ) {
                free(hashRows) ;
                return 0 ;  
            }
        }
        free(hashRows);  
    }       

    for(int i = 0 ; i< 9 ; i++){
        int *hashCols = calloc(10,sizeof(int));   
        for(int j = 0 ; j< 9 ; j++){
            if (board[j][i] == '.') continue;  
            else num = board[j][i] - '0';  
            hashCols[num]++ ;  
            if(hashCols[num] > 1)  {
                free(hashCols) ; 
                return 0 ; 
            }
        }
        free(hashCols);  
    } 
    int i = 0 , j = 0 ; 

for (int rowStart = 0; rowStart < 9; rowStart += 3) {
    for (int colStart = 0; colStart < 9; colStart += 3) {
        int *hashGrids = calloc(10, sizeof(int));
        for (int i = rowStart; i < rowStart + 3; i++) {
            for (int j = colStart; j < colStart + 3; j++) {
                if (board[i][j] != '.') {
                    int num = board[i][j] - '0';
                    hashGrids[num]++;
                    if (hashGrids[num] > 1) {
                        free(hashGrids);
                        return 0; 
                    }
                }
            }
        }
        free(hashGrids);
    }
}  
    return 1 ; 
} 
