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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>v;
        
        if(!root) return v;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int count = q.size();
            vector<int>vv;
            for(int i=0;i<count;i++)
            {
                
                TreeNode* temp = q.front();
                q.pop();
                vv.push_back(temp->val);
                if(temp -> left) q.push(temp->left);
                if(temp -> right) q.push(temp ->right);
            }
            v.push_back(vv);
        }
        return v; 
    }
};