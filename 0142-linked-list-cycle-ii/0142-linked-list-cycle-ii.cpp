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

        // //more time complexity 
        // map<ListNode *, int>m;
        // ListNode* temp=head;
        // while(temp!=NULL)
        // {
        //     if(m.find(temp) != m.end())
        //     {
        //         return temp;
        //     }
        //     m[temp]=1;
        //     temp=temp->next;
        // }
        // return NULL;

        // optimized
        ListNode * slow =head, *fast=head;
        bool loop=false;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
            {
                loop=true;
                break;
            }
        }
        slow=head;
        if(loop==true)
        {
            while(slow!=fast)
            {
                slow=slow->next;
                fast=fast->next;
            }
            return fast;
        }
        return NULL;
    }
};