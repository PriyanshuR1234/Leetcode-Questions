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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // int count=0;
        // ListNode *temp=head;
        // while(temp)
        // {
        //     temp=temp->next;
        //     count++;
        // }
        // cout<<count;   
        // int a=count-n-1;
        // temp=head;
        // while(a>0)
        // {
        //     temp=temp->next;
        //     a--;
        // }
        // if(n==count)return head->next;
        // ListNode *del=temp->next;
        // temp->next=temp->next->next;
        //  delete del; 
        
        // return head;



        //2nd optimized
        int a=n;
        ListNode * slow=head;
        ListNode * fast=head;
        while(a>0)
        {
            fast=fast->next;
            a--;
        }
        if(fast==NULL)return head->next;

        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        
        slow->next=slow->next->next;
        return head;
        
    }
};