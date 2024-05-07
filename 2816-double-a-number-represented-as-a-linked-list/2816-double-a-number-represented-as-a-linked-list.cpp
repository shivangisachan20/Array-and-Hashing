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
    int carry;

  int multiply(ListNode* head) {
    if (head == nullptr) {
      return 0; // Base case: If list is empty, return 0 (no carry)
    }

    multiply(head->next);

    int current = head->val * 2 + carry;
    carry = current / 10;

    head->val = current % 10;

    return carry; // Return the final carry after processing the entire list
  }
    ListNode* doubleIt(ListNode* head) 
    {
        int t = multiply(head);
        if(t) head = new ListNode(t, head);
        return head;
    }
};
