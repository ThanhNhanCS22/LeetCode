bool isHappy(int n) {
    int sumOfSquaredDigits  ; 
    
    while(sumOfSquaredDigits != 89 ) {
        sumOfSquaredDigits = 0 ; 
        while(n ){
            sumOfSquaredDigits += pow((n%10),2) ; 
            n = n/10 ; 
        }

        if (sumOfSquaredDigits == 1) return 1 ; 
        n = sumOfSquaredDigits; 
    } 
    return 0 ; 
}
