/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    
    *returnSize= 0 ; 
    int* result = malloc( sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size ) ) ; 
    int* hashMap = calloc(1001,sizeof(int )) ; 


    for (int i = 0 ; i < nums1Size ; i++) {
        hashMap[nums1[i]]++  ;  
    } 
    for(int i = 0 ; i < nums2Size ; i++){
        if(hashMap[nums2[i]]){
            hashMap[nums2[i]] -- ; 
            result[(*returnSize)++] = nums2[i]; 


        } 
    } 
    free(hashMap); 
    
    return result; 

}
