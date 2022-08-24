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
    int ans = INT_MIN;
     int diamter(TreeNode* root)
     {
         if(!root) return 0;
        
        int lh = max(0,diamter(root->left));
        int rh = max(0,diamter(root->right));
        ans = max(ans, lh + rh + root->val);
        return root->val + max(lh,rh);
     }
    int maxPathSum(TreeNode* root) {
        
        diamter(root);
        return ans;
    }
};