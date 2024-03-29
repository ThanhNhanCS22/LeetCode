int maxProduct(int* nums, int numsSize) {
    int product = nums[0] ; 
    int result = nums[0] ; 
    int numOfSignMinus =  0 ; 
    int leftMinusPtr = 0 ; 
    int rightMinusPtr = 0 ; 
    for(int i = 0 ; i <= numsSize ; i++ ) {
        
        if(product > result ) result = product ; 
        if (product == 0 && i != numsSize -1  ){
            numOfSignMinus= 0 ;
            product = nums[i+1] ;
            continue ; 
        }
        if(nums[i] < 0 ) {
            
            if(numOfSignMinus == 0 )  { 
                
                leftMinusPtr = i   ; 
                rightMinusPtr = i ;   
            }
            else { 
                
                rightMinusPtr = i ; 
            }
            numOfSignMinus += 1 ;
        }
        if((i != numsSize - 1 && nums[i+1] == 0) || (i == numsSize-1 )  ) { 
            if (numOfSignMinus % 2 == 1 ) {  
           
                int temp1 = 1 , temp2 = 1 ; 
                int e, k ; 
                for(e = leftMinusPtr ; e>= 0  && nums[e]!=0 ; e -- ) { 
                    temp1 *= nums[e] ; 
                }  
                e++ ; 
                for(k = rightMinusPtr ;k < numsSize && nums[k] != 0 ; k++ ) { 
                    temp2 *= nums[k]; 
                }
                k --; 
                if(e == k ) product =  temp1 ; 
                else if(temp1 < temp2) { 
                    for(int j = rightMinusPtr ; j < numsSize && nums[j] != 0 ; j ++ ){
                        product = product/nums[j] ; 

                    }
                } 
                else{
                    for(int j = leftMinusPtr ; j >= 0 && nums[j] != 0  ; j -- ){
                        product = product/nums[j] ;
                    }
                }
                
                if(product > result ) result = product ;
            }  
        
        }
      
        if(i == numsSize - 1  ) break ; 
        product*= nums[i+1] ;
    }
    return result ; 
}
