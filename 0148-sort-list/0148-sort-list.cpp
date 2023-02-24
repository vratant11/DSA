class Solution {
public:
    ListNode* sortList(ListNode* head) {
     ListNode* dummy = head;
        ListNode* final = head;

        vector<int> vec;
        while(dummy){
            vec.push_back(dummy->val);
            dummy = dummy->next;
        }
        sort(vec.begin(), vec.end());
        int n = vec.size();

        for(int i=0; i<n; i++){
            final->val = vec[i];
            final = final->next;
        }

        return head;}
};