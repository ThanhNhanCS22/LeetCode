/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int findLostNum(int *arr,int size){
    int result ; 
    for(int i = 1; i < size + 1 ; i ++){ 
        int check = 0;
        for(int j = 0 ; j < size ; j++){
           
            if(i==arr[j]) {
                check = 1 ; 
                break; 
            } 
        }
        if(check == 1 ){
            continue ; 
        }
        else{
            result = i ; 
            break ; 
        } 

    }
    return result ; 
}

int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    
    int *arr = malloc(2*sizeof(int))  ; 
    int lossNum = findLostNum(nums,numsSize) ; 
    int check  = 0 ; 
    for (int i = 0 ; i < numsSize -1 ; i ++ ){
        
        for(int j = i +1; j < numsSize ; j ++ ){
            if(nums[i] == nums[j]) { 
                check = 1 ; 
                arr[0] = nums[i] ; 
                arr[1] = lossNum ;  
                break; 
            }

        }
        if (check == 1) break ; 
       
    }
    * returnSize = 2 ; 
    return arr ; 
}
