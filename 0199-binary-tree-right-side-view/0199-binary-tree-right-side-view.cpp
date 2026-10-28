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
    vector<int> rightSideView(TreeNode* root) {
        if(root==nullptr)return {};
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> res;
           for(int i=0;i<n;i++){
            TreeNode* temp=q.front();
            q.pop();
            res.push_back(temp->val);
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
           }
           ans.push_back(res);
        }
        vector<int> v;
        for(auto it:ans){
            v.push_back(it.back());
        }
        return v;

    }
};