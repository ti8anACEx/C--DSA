// 2. Add Two Numbers

// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [7,0,8]
// Explanation: 342 + 465 = 807.

// approach: we know 243 + 564 = 807
// but doing 2 + 5 (=7), 4 + 6 (=10, so = 0, carry_1), 3 + 4 (=7 +carried_1, so =8)
// so we see that, adding the answer digit by digit from L to R (irl R to L happens) gives us the actual result in reversed way, so we can directly store it via sending it to Linked lists

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        short carryDigit = 0;

        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        while(l1 != nullptr || l2 != nullptr || carryDigit > 0) {

            int val1 = l1 != nullptr ? l1->val : 0;
            int val2 = l2 != nullptr ? l2->val : 0;

            int sum = val1 + val2 + carryDigit; // sum of corresponding digits of the lists, and carry if available  
            int digit = sum % 10; // eg. sum = 17, so digit must be 7
            carryDigit = sum/10; // eg. sum = 17, so carryDigit must be 1

            // now just append the to the final list
            ListNode* newNode = new ListNode(digit);

            if (head==nullptr) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail->next = newNode; // its like “take the current tail node, and make its next point to the newNode”
                tail = newNode; // now that the new node is added to the list, we update our tail pointer to point to the new last node
            }

            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        return head;
    }
};

// We can further optimize this code (in space as time for our code is OK)
// by deleting the newly created objects if possible, making custom memory pools, struct optimizations, or avoiding dynamic allocation. seperately