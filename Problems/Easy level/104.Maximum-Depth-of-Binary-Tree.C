/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void findmaxDepth(struct TreeNode* root,int len, int *max ){
    if(root == NULL ) return ; 
    else{
        len+=1 ; 
        if(*max<len ) *max = len;

    }   
    findmaxDepth(root->left,len, max ) ; 
    findmaxDepth(root->right,len, max ) ; 
} 
int maxDepth(struct TreeNode* root) {
    int max = 0 ; 
    findmaxDepth( root,0, &max ) ; 
    return max; 
}
