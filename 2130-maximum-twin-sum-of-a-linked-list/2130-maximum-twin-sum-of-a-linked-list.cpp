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
    int pairSum(ListNode* head) {
        int sum=0;
        stack<int>ans;
        ListNode *p=head;
        while(p!=NULL){
            ans.push(p->val);
            p=p->next;
        }
        p=head;
        while(p!=NULL){
            sum=max(ans.top()+p->val,sum);
            ans.pop();
            p=p->next;
        }
        return sum;
    }
};






