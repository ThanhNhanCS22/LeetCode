int climbStairs(int n) {
    
        
        if(n == 2 ) return 2 ;
        else if (n == 1) return 1 ; 
        
        else{
            int check = 3;  
            int a = 1 ; 
            int b = 2 ; 
            int result = 0 ; 
            while(check <= n){
                result = a + b ;
                a = b ; 
                b = result ; 
                check++ ; 
            }
            return result ;           
        }
    
    
}
