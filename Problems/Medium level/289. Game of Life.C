void gameOfLife(int** board, int boardSize, int* boardColSize) {
   
    int count1s ; 
    for(int i = 0 ; i < boardSize ; i++){
        for(int j = 0 ;j < boardColSize[0]; j++){
            
            count1s = 0 ; 
            if( i -1 >= 0 && j-1 >=0  ){
                if(board[i-1][j -1] >= 1) count1s++; 
                
            }
            if( j-1>=0 ) {
                if(board[i][j-1] >=1    )  count1s++; 
                
            }
            if( i-1>=0 ) {
                if(board[i-1][j] >=1)  count1s++; 
             
            }
            if( i-1>=0 && j+1< boardColSize[0]) {
                if(board[i-1][j+1] >=1  )  count1s++; 
                
            } 
            if( j+1< boardColSize[0] >=1) {
                if(board[i][j+1] )  count1s++; 
            
            } 
            if( i+1 < boardSize && j+1< boardColSize[0] ) {
                if(board[i+1][j+1] >=1)  count1s++; 
                
            } 
            if( i+1 < boardSize ) {
                if(board[i+1][j] >=1 )  count1s++; 
           
            } 
            if(i+1 <boardSize && j-1>= 0) {
                if(board[i+1][j-1] >= 1)  count1s++; 
                
            } 
            if(board[i][j] ) {
                if(count1s < 2 || count1s>3) board[i][j] = 2 ; 
               
            } 
            else {
                if(count1s == 3) board[i][j] = -1  ;  
            }

        }
    }

    for(int i = 0 ;  i < boardSize;i++){

        for(int j = 0 ; j < boardColSize[0] ; j++){
            if(board[i][j] ==2  ) board[i][j] = 0 ; 
            else if(board[i][j] == -1 ) board[i][j] =1 ;    
        }
    } 
}
