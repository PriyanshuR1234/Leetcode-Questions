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
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) return head; 
        ListNode* temp = head;
        ListNode* odd = NULL;
        ListNode* odditt = NULL;
        ListNode* even = NULL;
        ListNode* evenitt = NULL;
        int count = 1;
        while (temp) {
            if (count % 2 != 0) {
                if (odd == nullptr) {
                    odd = temp;
                    odditt = temp;
                } else {
                    odditt->next = temp;
                    odditt = odditt->next;
                }
            } else {
                if (even == nullptr) {
                    even = temp;
                    evenitt = temp;
                } else {
                    evenitt->next = temp;
                    evenitt = evenitt->next;
                }
            }
            count++;
            temp = temp->next;
        }
        odditt->next = even;
        if (evenitt) evenitt->next = nullptr;
        return odd;
    }
};