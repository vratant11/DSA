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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        
        ListNode *ptr=head;
        
        while (ptr!=NULL ){
            ListNode *qtr=ptr->next;
            while(qtr!=NULL){
                if (ptr->val<qtr->val){
                    v.push_back(qtr->val); 
                    break;
                }
                else qtr=qtr->next;
            }
            if(qtr==nullptr){
            v.push_back(0); 
            }
            ptr=ptr->next;
        }
        return v;
    }
};