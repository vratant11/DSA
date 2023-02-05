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
    ListNode* removeNodes(ListNode* head) {
       ListNode* temp=head;
        vector<int>ans;
        while(temp!=NULL){
            if(ans.size()==0){
                ans.push_back(temp->val);
            }
            else{
                while(ans.size()&&temp->val > ans.back()) ans.pop_back();
                ans.push_back(temp->val);
            }
            temp=temp->next;
        }
        ListNode* root=new ListNode(ans[0]);
        ListNode* t=root;
        for(int i=1;i<ans.size();i++){
            t->next=new ListNode(ans[i]);
            t=t->next;
        }
        return root;
    }
};