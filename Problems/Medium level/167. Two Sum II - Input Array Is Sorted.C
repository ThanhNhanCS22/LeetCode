/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int binarySearch(int * mid, int left, int right, int desireVal,int *arr   ) {
    while(left<=right) {
        *mid = (left + right)/2 ; 
        if(arr[*mid] == desireVal) return 1 ; 
        else if(arr[*mid] > desireVal ) right = (*mid) - 1 ;  
        else left = (*mid) + 1 ; 
    }
    return 0 ; 
    
} 

int* twoSum(int* nums, int numbersSize, int target, int* returnSize) {
    int idx2 ;
    int *result = malloc(2*sizeof(int ) ) ; 
    *returnSize = 2 ;  
    for(int i = 0 ; nums[i]<= target/2 && i< numbersSize -1  ; i++  ) {
        if(binarySearch(&idx2, i+1 , numbersSize -1, target - nums[i], nums  ) ) {
            result[0] = i+1  ; 
            result[1] =  idx2+1; 
            break ; 
        }
    } 
    return result; 
    
}
