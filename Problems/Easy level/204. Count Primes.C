//Sieve of Eratosthenes Algorithm 
int countPrimes(int n) { 
   
    int primeArr[n+1] ; 
    memset(primeArr , 1 , sizeof(primeArr) ) ; 
    for(int i = 2 ; i * i < n ; i++) {
        for(int j = i*i ; j<= n; j+= i) { 
            primeArr[j]= 0 ;  
        } 
    }    
    int count= 0 ; 
    for(int i = 2 ; i < n ; i++) { 
        if(primeArr[i]) count ++;   
    } 
    return count ; 
}
