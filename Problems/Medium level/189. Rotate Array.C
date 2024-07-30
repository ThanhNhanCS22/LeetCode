// void rotate(int* nums, int numsSize, int k) {
//     int *newArr = malloc(numsSize*sizeof(int) )  ; 
//     int pos ; 
//     for(int i = 0 ; i < numsSize ; i++) { 
//         pos = (i + k)% numsSize ; 
//         // while(pos> numsSize - 1 ) pos = pos - numsSize;  
//         newArr[pos] = nums[i];
//     }  
//     for(int i = 0 ; i < numsSize; i ++ ){ 
//         nums[i] = newArr[i];  
//     } 
//     free(newArr); 


// }

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
void rotate(int* nums, int numsSize, int k) {
    int *newArr = malloc(numsSize*sizeof(int) )  ; 
    k = k % (numsSize ) ; 
    reverse(nums, 0, numsSize - 1 ); 
    reverse(nums, 0 , k -1 ); 
    reverse(nums, k , numsSize -1 )   ; 


}
