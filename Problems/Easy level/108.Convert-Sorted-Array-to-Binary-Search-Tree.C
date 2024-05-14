/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* createNode(int data )  {
    struct TreeNode * newNode = malloc(sizeof(struct TreeNode ) ) ; 

    newNode -> val = data ; 
    newNode -> left = NULL; 
    newNode -> right = NULL; 
    return newNode ;  
}
void createTree(struct TreeNode * root, int midIdx, int leftIdx, int rightIdx,int* nums ){
    if(midIdx == leftIdx || midIdx > rightIdx  ) return ;   
    root-> left = createNode(nums[(midIdx + leftIdx)/2 ]) ; 
    root->right = ((midIdx+rightIdx)/2+1  <=  rightIdx) ? createNode(nums[(midIdx+rightIdx)/2+1 ]) : NULL  ; 
     
    createTree(root-> left, (midIdx+leftIdx)/2, leftIdx, midIdx-1,nums )   ; 
    createTree(root->right ,(midIdx + rightIdx)/2 + 1, midIdx+ 1, rightIdx, nums )   ; 
    return ;
} 
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
  
    struct TreeNode * root = createNode(nums[numsSize/2 ])  ; 
    createTree( root, numsSize/2, 0, numsSize-1 ,nums );

    return root ; 


}

/*

//Oms runtime code sample 
 
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


struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
  int start = 0;
  int end = numsSize-1;
  return makeBST(nums, 0, end);
}




*/
