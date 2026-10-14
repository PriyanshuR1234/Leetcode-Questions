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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;

       ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* curr = head;
        while(curr)
        {
            bool flag=false;
            while(curr->next && curr->val==curr->next->val)
            {
                flag=true;
                curr= curr->next;
            }
            if(flag)
            {
                prev->next=curr->next;
            }
            else{
                prev=curr;
            }
            curr=curr->next;
        }
        ListNode* result = dummy->next;
        delete dummy;
        return result;
    }
};