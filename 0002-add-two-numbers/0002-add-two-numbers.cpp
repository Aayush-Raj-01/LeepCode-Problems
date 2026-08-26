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
        ListNode* curr = dummy;
        int carry = 0;
        ListNode *temp1 = l1;
        ListNode* temp2 = l2;
        while (temp1 != NULL && temp2 != NULL) {
            int temp = temp1->val + temp2->val + carry;
            int digit = temp%10;
            carry = temp/10;
            curr->next = new ListNode(digit);
            curr = curr->next;
            temp1 = temp1->next ;
            temp2 = temp2->next ;
        }
        while(temp1 != NULL){
            int temp = temp1->val + carry;
            int digit = temp%10;
            carry = temp/10;
            curr->next = new ListNode(digit);
            curr = curr->next;
            temp1 = temp1->next;
        }
        while(temp2 != NULL){
            int temp = temp2->val + carry;
            int digit = temp%10;
            carry = temp/10;
            curr->next = new ListNode(digit);
            curr = curr->next;
            temp2 = temp2->next;
        }
        if(carry != 0){
            curr->next = new ListNode(carry);
        }
        return dummy->next;
    }
};