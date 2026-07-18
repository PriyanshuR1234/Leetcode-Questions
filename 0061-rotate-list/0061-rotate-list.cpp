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
ListNode * reverse(ListNode * temp)
{
    
    ListNode * curr=temp;
    ListNode * prev=NULL, * front=NULL;
    while(curr!=NULL)
    {
        front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
    }
    return prev;
}
    ListNode* rotateRight(ListNode* head, int k) {
        int n=0;
        ListNode *temp=head;
        if(temp==NULL || temp->next==NULL || k==0)return temp;
        while(temp)
        {
            n++;
            temp=temp->next;
        }

        temp=head;
        k=k%n;
        if(k==0)return head;
        int moves=n-k-1;
        while(moves>0)
        {
            temp=temp->next;
            moves--;
        }
        ListNode *nextnode=temp->next;
        temp->next=NULL;
        // ListNode* rev=reverse(nextnode);
        temp=nextnode;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=head;
        return nextnode;

    }
};