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
    ListNode* partition(ListNode* head, int x) {
        ListNode * temp=head;
        ListNode * prev=head;
        ListNode * prevNext=NULL;
        ListNode * fut=NULL;
        ListNode * futNext=NULL;

        ListNode dummy(0, head);
        
        prev = &dummy;
        
        while (prev->next && prev->next->val < x) {
            prev = prev->next;
        }
        if (!prev->next) return head;

        temp = prev->next; 

        while(temp && temp->next)
        {
            if(temp->next->val<x)
            {
                ListNode * fut = temp->next;
                temp->next=fut->next;
                fut->next = prev->next;
                prev->next = fut;
                prev=prev->next;
            }
            else {
                temp=temp->next;
            }
        }
        return dummy.next;
    }
};