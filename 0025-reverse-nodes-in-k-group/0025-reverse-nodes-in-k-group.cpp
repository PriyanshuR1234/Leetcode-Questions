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
    // Helper function to find the k-th node from the current temp node
    ListNode* kth(ListNode* temp, int k) {
        k -= 1;
        while (temp != nullptr && k > 0) {
            temp = temp->next;
            k--;
        }
        return temp;
    }

    // Helper function to reverse a standalone linked list segment
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevLast = nullptr;

        while (temp != nullptr) {
            // Find the k-th node of the current group
            ListNode* kthNode = kth(temp, k);

            // If there are fewer than k nodes left, leave them as they are
            if (kthNode == nullptr) {
                if (prevLast) prevLast->next = temp;
                break;
            }

            // Store the pointer to the next group's starting node
            ListNode* nextNode = kthNode->next;
            
            // Isolate the current k-group by breaking the link
            kthNode->next = nullptr;

            // Reverse the current isolated k-group
            reverseList(temp);

            // If it's the very first group, update the main head of the list
            if (temp == head) {
                head = kthNode;
            } else {
                // Link the previous group's tail to this group's new head
                prevLast->next = kthNode;
            }

            // Update trackers: 'temp' becomes the tail of the reversed group
            prevLast = temp;
            temp = nextNode;
        }

        return head;
    }
};
