/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quicksort(int *arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int* deckRevealedIncreasing(int* deck, int deckSize, int* returnSize) {
    *returnSize = deckSize; 
    if (deckSize< 2) return deck ; 
    int *result = calloc(deckSize, sizeof(int) ) ; 
    int count = 0 ; 
    int distance = 2 ; 
    int checkValidSeondIndex = 0 ; 
    quicksort(deck, 0 , deckSize-1 ) ; 
    
    result[0]  = deck[count++ ]; 

    while(count< deckSize) { 
        
        int i = 0 ; 
        for ( ; i < deckSize ; i ++ ){ 
            if(checkValidSeondIndex  == 1 && result[i] == 0 ) { 
                result[i] = deck[count++] ;   
                break ; 
            } 
            else if(result[i] == 0 ) checkValidSeondIndex ++ ;  
        }  
        i +=  distance ; 
        for ( ;  i < deckSize ; i += distance ){
            result[i] = deck[count++] ;
        } 
        if(count + 1 == deckSize) {
            for(int k = 0 ; k < deckSize; k++) { 
                if (result[k] == 0 ){
                    result[k] = deck[count++] ; 
                    break ; 
                } 
            }
        }
        checkValidSeondIndex  =0 ; 
        for(int j = i - distance ; j < deckSize ; j ++  ) { 
            if(result[j] == 0 ) {
                checkValidSeondIndex = 1 ; 
                break; 
            } 
        }  
        distance = distance*2; 

    }
    
    return result  ; 
    
     
}
