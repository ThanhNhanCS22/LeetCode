int pivotInteger(int n) {
    int sumOf_n = 0 ; 
    int sumOf_pivot = 0 ; 
    for (int i = 1 ; i <= n ; i++  ){
        sumOf_n += i ; 
    }
    for(int i = 1 ; i <= n ; i++ ){
        sumOf_pivot += i ; 
        if(sumOf_n -sumOf_pivot + i  ==  sumOf_pivot)  return i; 
    }
    return -1 ; 
}
