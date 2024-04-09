int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize) {
    int exitVal ; 
    int indexSand  = 0 ;  
    int count = 0 ; 
    do {

        exitVal = 0 ; 
        for(int i = 0 ; i < studentsSize ; i ++  ){
            if(students[i]!= -1 && students[i] == sandwiches[indexSand]){
                indexSand++; 
                count ++; 
                students[i] = -1 ; 
                exitVal = 1; 
            } 
        } 
    } while(indexSand < studentsSize  && exitVal == 1  ) ; 
    return studentsSize - count ; 
}
/*
int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize) {
    int no0=0, no1=0, i;
    for (i =0; i< studentsSize;i++)
    {
        if (students[i] == 0)
            no0++;
        else
            no1++;
    }
    for (i =0; i<sandwichesSize; i++)
    {
        if(sandwiches[i] ==0)
        {
            if (no0 == 0)
                return sandwichesSize-i;
            no0--;
        } else {
            if (no1 == 0)
                return sandwichesSize-i;
            no1--;
        }
    }
    return 0;
}
*/
// 0ms runtime 
