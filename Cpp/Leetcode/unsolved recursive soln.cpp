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
    //ListNode* newt = new ListNode();
private:
    pair<ListNode*,ListNode*> revlis(int ind,ListNode* node, ListNode* ans)
    {
        if(node == NULL)
        return {NULL,NULL};
        if(node->next == NULL)
        {
            ans = node;

            cout<<ind<<"r-r"<<ans->val<<" ---\n";
            return {node,ans};
        }

        revlis(ind+1,node->next,ans).first->next = node;
        
        cout<<ind<<" ----"<<node->val<<"  -"<<ans->val<<"\n";
        
        return {node,revlis(ind,node,ans).second};  
              

    }
public:
     ListNode* reverseList(ListNode* head) {
        ListNode* temp = new ListNode();
        return revlis(0,head,temp).second;
        //return temp->next;      
    }
};