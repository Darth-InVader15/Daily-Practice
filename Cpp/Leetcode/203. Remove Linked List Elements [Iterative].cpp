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
    ListNode* head2 = new ListNode();
    ListNode* temp = head2;
    ListNode* removeElements(ListNode* head, int val) 
    {
        ListNode* temp1 = new ListNode();
        if(head == NULL)
        return NULL;
        if(head->val != val)
        {
            temp1->val = head->val;
            temp->next = temp1;
            temp= temp->next;
        }
        removeElements(head->next, val);
        return head2->next;

    }
};