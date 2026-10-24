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
 void inorder(TreeNode* root,vector<int>&v){
    if(root==nullptr)return;
    inorder(root->left,v);
    v.push_back(root->val);
    inorder(root->right,v);
 }

void fix(TreeNode* root,vector<int>&v,int &i){
    if(root==nullptr)return;
    fix(root->left,v,i);
    root->val=v[i];
    i++;
    fix(root->right,v,i);
    
}
class Solution {
public:
    void recoverTree(TreeNode* root) {
        vector<int> v;
        inorder(root,v);
        sort(v.begin(),v.end());
        int i=0;
        fix(root,v,i);
        return;
    }
};