int findMax(int * arr, int len){
    int max= arr[0];  
    for(int i = 1 ; i < len; i++){
        if(max< arr[i] ) max = arr[i];   
    }
    return max;  
} 

void countingSort(int* arr,int len ){ 
    int max = findMax(arr, len); 
    int countArr[max+1 ]; 
    memset(countArr, 0 , (max+1)*sizeof(int ) )  ;
    for(int i = 0 ; i< len ; i ++){ 
        countArr[arr[i]]++;   
    }   
    int idx = 0 ; 
    while(max || countArr[0]) {
        if(countArr[max]) {
            arr[idx++]= max; 
            countArr[max]--; 
        }
        else max -- ; 

    }  
} 

int hIndex(int* citations, int citationsSize) {
    countingSort(citations, citationsSize) ; 
    int hIdx =-1  ; 
    for(int i = 0 ; i < citationsSize; i++){
        if(i+1 >citations[i]){
            hIdx = i  -1 ; 
            break ; 
        } 
        else if(i+1== citations[i]){
            hIdx = i ; 
            break ; 
        } 
        hIdx++ ; 

    }
    return hIdx+1; 

}
