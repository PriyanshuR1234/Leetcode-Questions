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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       if (headA == nullptr || headB == nullptr) return nullptr;
        
        ListNode *ptrA = headA;
        ListNode *ptrB = headB;
        
        // Loop terminates either when they intersect or both reach nullptr
        while (ptrA != ptrB) {
            // Move to next node, or switch to the head of the other list
            ptrA = (ptrA == nullptr) ? headB : ptrA->next;
            ptrB = (ptrB == nullptr) ? headA : ptrB->next;
        }
        
        // Return either the intersection node or nullptr
        return ptrA;
    }
};