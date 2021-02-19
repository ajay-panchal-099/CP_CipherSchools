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
    
    void  VerticalT(map<int, vector<int>>&mp, TreeNode* root,  int index){ 
       
        if( !root) return;
        
        mp[index].push_back(root->val);
        
        VerticalT(mp, root->left, index-1);
        VerticalT(mp, root->right, index+1);
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>> ans;
        map<int, vector<int>> mp;
        VerticalT(mp, root, 0);
        
        for( auto it: mp)
            ans.push_back(it.second);
         
            
        
        return ans;
        
    }
};