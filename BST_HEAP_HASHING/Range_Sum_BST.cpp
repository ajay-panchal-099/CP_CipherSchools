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
     int sum = 0;
    void range(TreeNode * root, int start, int end) {
    if (root == NULL) return;

    if (root->val < start)
        range(root->right, start, end);
    else if (root->val >= start && root->val <= end) {
        range(root->right, start, end);
        sum+=root->val;
        range(root->left, start, end);
    } else 
        range(root->left, start, end);
}
    
    int rangeSumBST(TreeNode* root, int low, int high) {
       
        range(root, low, high);
        return sum;
    }
};