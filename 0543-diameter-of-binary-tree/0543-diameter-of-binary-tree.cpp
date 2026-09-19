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
 
 int maxheight(TreeNode* root, int& dia){
    if(root==NULL)return 0;
    else{
       int lh=maxheight(root->left,dia);
        int rh=maxheight(root->right,dia);
        dia=max(dia,lh+rh);
        return 1+max(lh,rh);
    }
 }
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int dia=0;
        maxheight(root,dia);
        return dia;
    }
};