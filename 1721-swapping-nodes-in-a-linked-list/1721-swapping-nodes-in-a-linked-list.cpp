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
    ListNode* swapNodes(ListNode* head, int k) {
        int len=0;
        ListNode*p=head;
        ListNode*q=head;
        ListNode*r=head;
         while(r->next!=NULL){
            r=r->next;
             len++;
        }
        for(int i=1;i<k;i++){
            p=p->next;
        }
        for(int i=0;i<(len-k+1);i++){
            q=q->next;
        }
        int temp=0;
        temp=q->val;
        q->val=p->val;
        p->val=temp;
        return head;      
    }
};