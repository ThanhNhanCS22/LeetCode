int compare(const void *a, const void *b ) {
    int num1 = *(int*)a  ;
    int num2 = *(int*)b ; 
    return num1 - num2 ; 

}
long long dividePlayers(int* skill, int skillSize) {
    
    qsort(skill,skillSize, sizeof(int), compare) ; 
    int sumOfFirstAndSecondPlayerSKill = skill[0] + skill[skillSize -1 ];  
    long long result = skill[0]* skill[skillSize-1]; 
    for(int i = 1,  j = skillSize - 2  ; i < j  ; i++, j-- ) { 
        if(skill[i] + skill[j] != sumOfFirstAndSecondPlayerSKill) return -1 ; 
        result += skill[i]* skill[j] ; 

    }
    return result; 
}
