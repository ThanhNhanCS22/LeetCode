/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#define MAX_HEAP_SIZE 10000 

typedef struct {
    long long *arr;
    int size;
    int capacity;
} MinHeap;

MinHeap* createMinHeap(int capacity) {
    MinHeap* heap = (MinHeap*)malloc(sizeof(MinHeap));
    heap->arr = (int*)malloc(capacity * sizeof(long long ));
    heap->size = 0;
    heap->capacity = capacity;
    return heap;
}

void percolateUp(MinHeap* heap, int index) {
    int parent = (index - 1) / 2;
    int temp;
    while (index > 0 && heap->arr[parent] > heap->arr[index]) {
        temp = heap->arr[parent];
        heap->arr[parent] = heap->arr[index];
        heap->arr[index] = temp;
        index = parent;
        parent = (index - 1) / 2;
    }
}

void percolateDown(MinHeap* heap, int index) {
    int leftChild, rightChild, minChild, temp;
    while (1) {
        leftChild = 2 * index + 1;
        rightChild = 2 * index + 2;
        minChild = index;

        if (leftChild < heap->size && heap->arr[leftChild] < heap->arr[minChild])
            minChild = leftChild;
        if (rightChild < heap->size && heap->arr[rightChild] < heap->arr[minChild])
            minChild = rightChild;

        if (minChild != index) {
            temp = heap->arr[index];
            heap->arr[index] = heap->arr[minChild];
            heap->arr[minChild] = temp;
            index = minChild;
        } else {
            break;
        }
    }
}

void push(MinHeap* heap, int value) {
    if (heap->size == heap->capacity) {
        printf("Heap Overflow\n");
        return;
    }
    heap->arr[heap->size++] = value;
   
    percolateUp(heap, heap->size - 1);
}

int deleteMin(MinHeap* heap) {
    if (heap->size == 0) {
        printf("Heap Underflow\n");
        return -1;
    }
    int minVal = heap->arr[0];
    heap->arr[0] = heap->arr[((heap->size)--) - 1];
    //heap->size--;
    percolateDown(heap, 0);
    return minVal;
}

struct ListNode* createNode(int val) {
    struct ListNode * newNode = malloc(sizeof(struct ListNode) ) ; 
    newNode->val = val; 
    newNode->next = NULL;  
    return newNode ; 
}
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    struct ListNode* result = NULL; 
    MinHeap *heap = createMinHeap(MAX_HEAP_SIZE) ; 
    for(int i = 0 ; i < listsSize ; i++){

        while(lists[i]){
            push(heap,lists[i]-> val) ; 
            lists[i] = lists[i]->next ;  
        } 
    }  
    if(heap->size){
        result = createNode(deleteMin(heap));  
    } 
    struct ListNode* temp = result ; 
    int len = heap->size ; 
    for(int i = 0 ; i < len; i++){
        temp->next = createNode(deleteMin(heap));  
        temp = temp->next ;  
    }   
    return result ; 
}
