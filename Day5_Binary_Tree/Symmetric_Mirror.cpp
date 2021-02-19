/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    bool Symmetric( TreeNode* r1, TreeNode* r2){ 
    
      if(r1== NULL && r2 ==NULL )
          return true;
        
        
      if(r1 == NULL || r2 == NULL || r1->val != r2->val)
          return false;
        
        return r1->val==r2->val and  Symmetric(r1->left, r2->right)  and Symmetric(r2->left, r1->right);
    
    
    }
    
    bool isSymmetric(TreeNode* root) {
        
       
        return Symmetric(root, root);
        
        
    }
};