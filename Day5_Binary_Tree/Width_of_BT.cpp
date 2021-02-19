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
    
    
    
    int widthOfBinaryTree(TreeNode* root) {
        
       if(!root) return 0;
        
        queue<pair<TreeNode* , long long >> q;
        q.push({root, 1});
        
        int ans = 0;
        while(!q.empty()){
            int mx = 0, mn = 0;
            int sz = q.size();
            int mm = q.front().second;
            int i =0;
            while(i < sz){  
                TreeNode* root = q.front().first;
                long long index = q.front().second - mm;
                q.pop();
                if(i ==0) mn = index;
                if( i == sz-1) mx = index;
               if(root->left)
                   q.push({root->left, 1LL*2*index}) ;
                if(root->right)
                    q.push({root->right, 1LL*2*index+1});
                i++;
            }
            
            ans = max(ans, mx - mn+1);
            
        }
        
       return ans;
        
    }
};