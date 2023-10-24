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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==NULL){
            return head;
        }
        
        ListNode* temp = head;
        while(temp->next){
            int a=temp->val;
            int b=temp->next->val;
            int c=__gcd(a,b);
            ListNode* newNode=new ListNode(c);
            newNode->next=temp->next;
            temp->next=newNode;
            temp=temp->next->next;
        }
        return head;
    }
};