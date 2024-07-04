/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int *convertAListToAnArray(struct ListNode* head,int *size ) { 
    int count = 0 ; 
    struct ListNode* temp = head ; 
    while(temp ){
        count ++; 
        temp = temp -> next ; 
    } 
    
    int *arr = malloc(sizeof(int) * count );  
    count = 0 ; 
    while(head ) {
        arr[count++]  = head-> val ; 
        head= head->next ; 

    } 
    *size = count ; 
    return arr ; 
}

struct TreeNode* makeBST(int* nums, int low, int high)
{
    if(high < low) return NULL;

    int mid = (low+high)/2;
    struct TreeNode* new_node = malloc(sizeof(struct TreeNode));
    new_node->val = nums[mid];
    new_node->left = makeBST(nums, low, mid-1);
    new_node->right = makeBST(nums, mid+1, high);
    return new_node;
}


struct TreeNode* sortedListToBST(struct ListNode* head) {
    
    if (!head) return NULL; 
    int size ; 
    int *arr = convertAListToAnArray(head, &size);
    
    int end = size-1 ;
    return makeBST(arr, 0, end); 

}
