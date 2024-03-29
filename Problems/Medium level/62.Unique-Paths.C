int uniquePaths(int m, int n) {
    if (m == 1 || n == 1 ) return 1 ; 
    else if (n == 2 ) return m ; 
    else if (m == 2 ) return n ;  
    else return uniquePaths(m-1, n) + uniquePaths(m, n -1 ) ; 
}


