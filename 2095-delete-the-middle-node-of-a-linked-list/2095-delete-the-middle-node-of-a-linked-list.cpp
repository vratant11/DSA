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
    ListNode* deleteMiddle(ListNode* head) {
             ListNode *slow =head;
           ListNode * fast=head;
           ListNode * prev=head;
           if(head==NULL){
               return NULL;
           }
           if(head->next==NULL){
               return NULL;
           }
           while(fast!=NULL and fast->next!=NULL){
               if(slow!=head){
                   prev=prev->next;
               }
                   fast=fast->next->next;
                   slow=slow->next;
           }

             prev->next=slow->next;
             return head;
    }
};