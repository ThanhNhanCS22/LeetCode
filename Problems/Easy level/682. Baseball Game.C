typedef struct stack{
    int size ; 
    int top; 
    int *arr ; 
} Stack ;

bool isEmpty(struct stack* ptr ){
    if (ptr->top == -1 ) {
        return 1; 
    }
    return 0; 
    
} 
bool isFull(struct stack* ptr ){
    if (ptr-> top == ptr->size -1 ) {
        return 1; 
    }
    return 0; 
    
} 
void push(struct stack * ptr, int val) {
    if(isFull(ptr)){
        
    }
    else  ptr->arr[++(ptr->top)] = val ;
    
}

int pop (struct stack* ptr){
    
    if (isEmpty(ptr) ) {
        
        return -1 ; 
        
    }
    else { 
        return ptr->arr[ptr->top--];  
    }
}
Stack *createStack(int size) {
    Stack* newStack= malloc(sizeof(Stack) ) ; 
    newStack->size = size ; 
    newStack->top = -1 ; 
    newStack->arr = malloc(size*sizeof(int) ) ; 
    return newStack ; 
} 

int calPoints(char** operations, int operationsSize) {
    Stack *points = createStack(1000) ; 
    for (int i = 0 ; i< operationsSize ; i ++) { 
        if(operations[i][0] >= '0' && operations[i][0] <='9' || operations[i][0] =='-'){
            int num = atoi(operations[i]) ; 
            push(points, num ) ;  
        }
        else if(operations[i][0] == 'D') {
            int popVal = pop(points); 
            push(points, popVal); 
            push(points , popVal*2); 

        } 
        else if(operations[i][0] == 'C') {
            pop(points);  
        } 
        else {
            int num1 = pop(points); 
            int num2 = pop(points); 
            push(points, num2) ; 
            push(points, num1); 
            push(points, num1+num2);    
        }

    }  
    int result = 0 ;
    while (!isEmpty(points) ) {
        result += pop(points);  
    }
    return result ; 
}

//My solution in problem is so long and complex :D I known .... 
