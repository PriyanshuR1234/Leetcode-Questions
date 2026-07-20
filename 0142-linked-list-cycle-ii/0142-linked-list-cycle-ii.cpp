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
    ListNode *detectCycle(ListNode *head) {
        map<ListNode *, int>m;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if(m.find(temp) != m.end())
            {
                return temp;
            }
            m[temp]=1;
            temp=temp->next;
        }
        return NULL;
    }
};