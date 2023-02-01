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
    ListNode* removeElements(ListNode* head, int val) {
       if(head==NULL)return NULL;
        ListNode* d=new ListNode(-1);
        d->next=head;
        ListNode* tail=d;
        while(tail!=NULL&&tail->next!=NULL){
            if(tail->next->val==val){
                ListNode* temp=tail->next;
            tail->next=tail->next->next;
            delete temp;
            }
             else{
            tail=tail->next;
        }
            
        }
        return d->next;
       
    }
};