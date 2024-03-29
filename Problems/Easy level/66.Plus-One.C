/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
     
    for(int i = digitsSize - 1 ; i >= 0 ; i-- ) {
        if(digits[i] != 9 ){
            digits[i] += 1 ; 
            
            break ; 
        } 
        digits[i] = 0 ; 
        

    }  
    if(digits[0] != 0 ) { 
        *returnSize = digitsSize ; 
        return digits ; 
    } 
    int *resultArr = malloc((digitsSize +1 )*sizeof(int)) ; 
    resultArr[0] = 1 ; 
    for(int i = 1 ; i <= digitsSize ; i ++ ){
        resultArr[i] = 0 ; 
    } 
    *returnSize = digitsSize+1 ; 
    return resultArr ; 
}
