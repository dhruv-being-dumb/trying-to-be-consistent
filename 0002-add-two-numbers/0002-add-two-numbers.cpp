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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode(0);
        ListNode* headdummy = dummy;

        ListNode* head1 = l1;
        ListNode* head2 = l2;

        int carry = 0;
        int answer = 0;

        while(head1 != NULL || head2 != NULL || carry != 0) {

            int val1 = 0;
            int val2 = 0;

            if(head1 != NULL) {
                val1 = head1->val;
                head1 = head1->next;
            }

            if(head2 != NULL) {
                val2 = head2->val;
                head2 = head2->next;
            }

            answer = val1 + val2 + carry;

            carry = answer / 10;
            answer = answer % 10;

            headdummy->next = new ListNode(answer);
            headdummy = headdummy->next;
        }

        return dummy->next;
    }
};