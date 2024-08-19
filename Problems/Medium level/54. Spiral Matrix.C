/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void covertMatrixToSpiralOrder(int**matrix, int rowIDX, int colIDX, int rowSize, int colSize, int arrIDX, int *arr, int size ) {
   
    int iniRowIdx = rowIDX ; 
    int iniColIdx = colIDX ; 

    while(colIDX - iniColIdx  <colSize  ) arr[arrIDX++] =  matrix[rowIDX][colIDX++] ; 
    rowIDX++ ; 
    colIDX-- ; 
    if (arrIDX == size ) return ; 

    while(rowIDX  - iniRowIdx  < rowSize  ) arr[arrIDX++] = matrix[rowIDX++][colIDX] ;    
    rowIDX-- ;   
    colIDX -- ; 
    if (arrIDX == size ) return ;

    while ( colIDX> iniColIdx) arr[arrIDX++] = matrix[rowIDX][colIDX--]; 
    while (rowIDX > iniRowIdx ) arr[arrIDX++] = matrix[rowIDX--][colIDX]; 
    if (arrIDX == size ) return ; 

    covertMatrixToSpiralOrder(matrix, iniRowIdx +1  , iniColIdx + 1   , rowSize -2 , colSize -2 , arrIDX, arr, size )  ; 
    return ; 
} 
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    
    *returnSize = matrixSize * matrixColSize[0] ; 
    int *arr = malloc(*returnSize*sizeof(int)) ; 

    covertMatrixToSpiralOrder(matrix, 0  , 0   , matrixSize , matrixColSize[0] ,0 , arr, *returnSize)  ; 

    return  arr ; 
}
