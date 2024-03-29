/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void traverseTree(int *count, struct TreeNode* root, int **arr ) {

    if(root ==NULL ) return ; 
    traverseTree(count, root->left ,arr) ; 
    (*arr)[*count] = root->val; 
    *count = *count+1 ;  
    traverseTree(count, root->right ,arr) ; 


} 
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int count = 0 ; 
    int *arr = malloc(101 *sizeof(int) ) ; 
    traverseTree(&count,  root, &arr )  ; 
    *returnSize = count; 
    return arr; 
}
