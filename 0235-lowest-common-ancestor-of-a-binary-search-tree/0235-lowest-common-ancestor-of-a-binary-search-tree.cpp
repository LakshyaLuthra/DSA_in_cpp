/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* curr1=root;
        TreeNode* curr2=root;
       unordered_set<TreeNode*> stt;
       while(1){
       
        stt.insert(curr1);
        if(p->val>curr1->val)curr1=curr1->right;
        else if(p->val<curr1->val)curr1=curr1->left;
        else break;
       } 
       TreeNode* ans=NULL;
       while(1){
        if(stt.find(curr2)!=stt.end())ans=curr2;
        if(q->val>curr2->val)curr2=curr2->right;
        else if(curr2->val>q->val)curr2=curr2->left;
        else break;
        }
        return ans;
       }

    };
