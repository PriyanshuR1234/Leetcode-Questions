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
ListNode * reverse(ListNode * list)
{
    if(list==NULL || list->next==NULL)return list;
    ListNode * curr=list;
    ListNode * prev=NULL;
    ListNode * forward=NULL;
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)return true;
        ListNode * slow=head,*fast=head;
       while(fast->next != NULL && fast->next->next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode * secondhead=reverse(slow->next);
        ListNode *first=head;
        ListNode *second=secondhead;
        while(second!=NULL)
        {
            if(first->val!=second->val)
            {
                reverse(secondhead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        reverse(secondhead);
        return true;
    }
};