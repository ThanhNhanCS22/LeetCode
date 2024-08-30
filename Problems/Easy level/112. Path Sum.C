/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void sumPath(struct TreeNode* root, int target, int sum, int *check){ 
    if(!root || *check ) return ; 
    sum += root->val ;
    sumPath(root->left, target, sum, check ) ;
    sumPath(root->right, target, sum, check ) ;
    if(!(root->left) && !(root->right) && sum == target)  *check = 1; 
    return ; 
} 
bool hasPathSum(struct TreeNode* root, int targetSum) {
    int check = 0 ; 
    sumPath(root, targetSum, 0, &check) ; 
    return check ;  
}
