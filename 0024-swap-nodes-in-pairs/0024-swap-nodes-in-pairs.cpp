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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;

        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode * curr=head;
        
        while(curr!=NULL && curr->next!=NULL)
        {
            ListNode * ne=head;
            ListNode * nepair=curr->next->next;
            ne=curr->next;



           
            ne->next=curr;
            curr->next=nepair;
            prev->next=ne;
            

            prev=curr;
            curr=nepair;
        }
        return dummy->next;

    }
};