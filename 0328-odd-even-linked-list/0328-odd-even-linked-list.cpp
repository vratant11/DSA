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
    ListNode* oddEvenList(ListNode* head)
    {   
        if(!head || !head->next || !head->next->next)
            return head;

        ListNode* oddNodes;
        ListNode* evenNodes = NULL;
        ListNode* oddNodesHead;
        ListNode* evenNodesHead;

        oddNodes = head;
        oddNodesHead = head;

        evenNodes = head->next;
        evenNodesHead = evenNodes;

        while(evenNodes && evenNodes->next)
        {
            oddNodes->next = evenNodes->next;
            evenNodes->next = evenNodes->next->next;

            oddNodes = oddNodes->next;
            evenNodes = evenNodes->next;
        }

        oddNodes->next = evenNodesHead;

        return oddNodesHead;
    }
};