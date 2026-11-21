/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *t1=l1;
        ListNode *t2=l2;

        ListNode* dummynode=new ListNode(0);
        ListNode* curr=dummynode;
        int carry=0;
        while(t1!=NULL || t2!=NULL){
            int sum=carry;
            if(t1!=NULL) {
            sum=sum+t1->val;
            t1=t1->next;}
            if(t2!=NULL) {
            sum=sum+t2->val;
            t2=t2->next;}
            ListNode* newnode= new ListNode(sum%10);
            carry=sum/10;
            curr->next=newnode;
            curr=curr->next;
        }
        if(carry>0){
            ListNode* newnode=new ListNode(carry);
            curr->next=newnode;
            curr=curr->next;
        }
        return dummynode->next;
    }
};