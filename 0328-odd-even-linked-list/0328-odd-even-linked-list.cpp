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

        ListNode* oddNode;
        ListNode* evenNodes = NULL;
        ListNode* oddNodesHead;
        ListNode* evenNodesHead;

        oddNode = head;
        oddNodesHead = head;

        evenNodes = head->next;
        evenNodesHead = evenNodes;

        while(evenNodes && evenNodes->next!=NULL)
        {
            oddNode->next = evenNodes->next;
            evenNodes->next = evenNodes->next->next;

            oddNode = oddNode->next;
            evenNodes = evenNodes->next;
        }

        oddNode->next = evenNodesHead;

        return oddNodesHead;
    }
};