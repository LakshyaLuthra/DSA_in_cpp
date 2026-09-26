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
 bool check(TreeNode* root,long long mini,long long maxi){
    if(root==NULL)return true;
    if(root->val <=mini || root->val>=maxi)return false;
    return check(root->left,mini,root->val) && check(root->right,root->val,maxi);
 }
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        long long mini=LLONG_MIN;
        long long maxi=LLONG_MAX;
        bool ans=check(root,mini,maxi);
        return ans;
    }
};