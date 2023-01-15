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
    ListNode* middleNode(ListNode* head) {
        if(!head)
        return head;
        
        int cnt =0;
        
        auto temp = head;
        while(temp!=NULL)
        {
            temp = temp->next;
            cnt++;
        }
        if(cnt&1)
        {
           // cout<<cnt<<"--\n";
            cnt++;
            cnt/=2;
        }
        else
        {
            cnt/=2;
            cnt++;
        }
        temp = head;
            for(int i=1;i<cnt;i++)
            {
                temp = temp->next;
            }
            return temp;
    }
};