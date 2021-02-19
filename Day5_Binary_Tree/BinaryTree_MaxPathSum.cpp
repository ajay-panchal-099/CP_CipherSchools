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
    
    
    int PathSum( TreeNode* root, int& Max){ 
       if( root == NULL){ 
            return 0;
       }
        
        int l = PathSum(root->left, Max);
        int r = PathSum(root->right, Max);
        
        int temp = max(root->val + max(l, r), root->val);
        int ans = max( temp, root->val + l+ r);
        Max = max(Max, ans);
        return temp;
        
    }
    
    
    
    int maxPathSum(TreeNode* root) {
        
        int Max = INT_MIN;
        int x = PathSum(root, Max);
        
        return Max;
    }
};