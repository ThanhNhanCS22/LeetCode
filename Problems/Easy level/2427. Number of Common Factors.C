int commonFactors(int a, int b) {
    int smaller = a < b ? a : b ; 
    int greater = smaller + abs(a - b) ;
    while(smaller)  {
        int temp = smaller ; 
        smaller = greater% smaller;  
        greater = temp ; 
    }
    int count = 0 ; 

    for (int i = 1  ; i <= greater ; i ++ ) { 
        if( !(smaller % i) && !(greater% i) )   count++ ; 
    }  
    return count ; 
}
