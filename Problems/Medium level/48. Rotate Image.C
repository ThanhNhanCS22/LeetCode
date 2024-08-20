void swap(int *a, int *b){
    int temp = *a ; 
    *a = *b ; 
    *b = temp ; 
} 
void reverse(int *nums, int start, int end ){
    int i = start ; 
    int j = end ; 
    int temp ; 
    while(i < j ){
        temp = nums[i] ; 
        nums[i++] = nums[j]; 
        nums[j--] = temp; 
        
    } 
} 
void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    for(int i = 0 ; i < matrixSize -1 ; i++){
        for(int j = i+ 1  ; j < matrixSize; j++){
            swap(&(matrix[i][j]), &(matrix[j][i]) ) ;   
        }
    }
    for(int i = 0 ; i < matrixSize ; i++) { 
        reverse(matrix[i], 0, matrixSize -1); 
    } 
      
}
