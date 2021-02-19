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
    int diameter(TreeNode* root, int& ans){ 
     
     if(root == NULL) return 0;
        
    int l = diameter(root->left,ans);
    int r=  diameter(root->right,ans);
        
    int temp = 1+max(l,r);
    int res = max(temp, 1+l+r);
    ans = max(ans, res);   
       
    return temp;    
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        int ans = INT_MIN+2;
        int x =  diameter(root,ans);
        return ans == INT_MIN+2?0:ans-1;
    }
};