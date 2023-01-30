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
    bool isPalindrome(ListNode* head) {
        stack<int>s;
        ListNode *p=head;
        int cnt=0;
        while(p!=NULL){
            s.push(p->val);
            p=p->next;
        }
        p=head;
        for(int i=0;i<s.size();i++){
            if(s.top() != p->val){
                cnt=1;
                break;
            }
            else{
                s.pop();
                p=p->next;
            }
        }
        if(cnt==1)return 0;
        else return 1;
    }
};