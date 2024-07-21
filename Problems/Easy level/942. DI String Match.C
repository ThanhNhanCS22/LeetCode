/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* diStringMatch(char* s, int* returnSize) {
    int *arr= malloc((strlen(s)+1)*sizeof(int) )  ;
    int small = 0 ; 
    int big = strlen(s) ; 

    for(int i =  0 ; i < strlen(s); i++) { 
        if(s[i] == 'I')  arr[i] = small++; 
        else  arr[i] = big-- ; 
    }   
    arr[strlen(s)] = small ; 

    *returnSize = strlen(s) + 1; 
    return arr; 

}
