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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        
        queue<TreeNode* > q;
        q.push(root);
        int i =0; 
         while(!q.empty()) { 
             
             vector<int> temp; 
             int sz = q.size();
             vector<TreeNode*> child;
             while(sz--){ 
                  child.push_back(q.front());
                  q.pop();
             }

             for( auto node : child) {  
                 temp.push_back(node->val); 
                  if(node->left != NULL) 
                      q.push(node->left);
                
                 if(node->right != NULL)
                      q.push(node->right);                     
             } 
             if(i&1) reverse(temp.begin(), temp.end());
             i++;
              ans.push_back(temp);
         }
     
        return ans;
    }
};