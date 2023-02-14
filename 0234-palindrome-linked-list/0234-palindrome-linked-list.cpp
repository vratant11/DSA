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
    ListNode* middle(ListNode* head){
        ListNode* sp = head;
        ListNode* fp = head;
        while(fp && fp->next){
            sp = sp->next;
            fp = fp->next->next;
        }
        return sp;
    }
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = head;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    bool compare(ListNode* l1, ListNode* l2){
        while(l1 && l2){
            if(l1->val != l2->val){
                return false;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        return true;
    }
    
    bool isPalindrome(ListNode* head) {
        
        ListNode* mid = middle(head);
        ListNode* rev = reverse(mid);
        return compare(head, rev);        
    }
};