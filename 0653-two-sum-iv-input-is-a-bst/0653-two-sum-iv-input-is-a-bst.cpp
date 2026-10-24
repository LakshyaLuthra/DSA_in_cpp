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
 void inorder(TreeNode* root,unordered_set<int>& stt){
    if(root==nullptr)return;
    inorder(root->left,stt);
    stt.insert(root->val);
    inorder(root->right,stt);
 }
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(root==nullptr)return false;
        unordered_set<int> stt;
        inorder(root,stt);
        for(auto it:stt){
            int req=k-it;
            if(req==it)continue;
            if(stt.find(req)!=stt.end())return true;
        }
        return false;

    }
};