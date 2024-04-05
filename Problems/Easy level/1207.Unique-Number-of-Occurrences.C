#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
bool notIn(int *arr, int arrSize, int number ) {
    if (arrSize == 0 ) return 1; 
    for (int i = 0 ; i < arrSize ; i ++ ){
        if (number == arr[i]) return 0 ; 
    }
    return 1 ; 

}


bool uniqueOccurrences(int* arr, int arrSize) {
    int len = 0 ;
    int *arr1 = (int*)malloc(len*sizeof(int)) ;

    int temp2 = 0 ; 
    for (int i = 0; i < arrSize ; i ++){
        
        
        if (notIn(arr1, len, arr[i] )) {
            len++ ;
            arr1 = (int*) realloc(arr1, len* sizeof(int)) ; 
            arr1[temp2] = arr[i] ; 
           
            temp2++ ; 

        }
    }
    for (int i = 0 ; i < len ; i ++) {
        int temp=0; 
        for(int j = 0 ; j < arrSize ; j ++){
            if (arr1[i] == arr[j]){
                temp ++ ;

            }
            
        }
        arr1[i] = temp ;

    }
    for (int i = 0 ; i < len -1  ; i++){
        for(int j = i+1; j < len ; j++ ){
            if(arr1[i] == arr1[j]) {
                free(arr1) ; 
                return 0 ; 
            }    
        } 
    }
    free(arr1);
    return 1; 
}
