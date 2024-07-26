// boyer–moore majority vote algorithm

int majorityElement(int* nums, int numsSize) {
    int count = 1 ; 
    int candidate = nums[0]; 
    for(int i = 1 ; i < numsSize ; i ++) {
        if(candidate != nums[i] ){
            count--; 
        } 
        else count++; 

        if(!count ) {
            count = 1; 
            candidate = nums[i]; 
        } 
    }
    return candidate; 
}
