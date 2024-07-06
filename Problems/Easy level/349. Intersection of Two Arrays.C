/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int hashMap[1001]  = {0} ; 
    int *result = malloc(sizeof(int )* nums1Size) ;  
    for(int i = 0 ; i < nums1Size ; i ++ ) {
        hashMap[nums1[i]] = 1 ;  
    }
    
    int idx = 0 ; 

    for (int i = 0 ; i< nums2Size ; i ++) {
        if(hashMap[nums2[i]] ){
            hashMap[nums2[i]] = 0 ; 
            result[idx++] = nums2[i]; 

        } 
    } 
    *returnSize = idx ; 
    return result ; 

}
