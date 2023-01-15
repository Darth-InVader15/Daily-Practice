/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
        
        if(!head || !head->next || !head->next->next)
        return NULL;

        auto slow = head;
        auto fast = head;
        auto ans = slow;

        while(fast->next != NULL && fast->next->next != NULL)
        {

            slow = slow->next;
            fast= fast->next->next;
            if(slow == fast)
            {
                break;
            }
        }
        if(slow != fast)
        return NULL;
        slow = head;
        while(slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
            if(slow == fast)
            break;
        }
        return slow;
    }
};