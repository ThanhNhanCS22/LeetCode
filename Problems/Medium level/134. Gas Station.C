int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize) {
    int gasTank ; 
    int i = 0; 
    for(; i < gasSize ; i++ ){ 
        if(cost[i] <= gas[i]  ){
            gasTank = gas[i]; 
            int j =  i   ; 
            do{
                if(gasTank < cost[j]) break ;  
                gasTank = gasTank - cost[j] + gas[(j+1)%gasSize]; 
                j = (j+1)%gasSize;  

            }while(j!=i );  
            if(j == i) return i ;  
            if(j> i) i= j-1 ;  
            else return -1; 
        } 
    }
    return -1 ; 
}
