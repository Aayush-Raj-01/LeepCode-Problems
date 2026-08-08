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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* prev = head;
        ListNode* curr = head;
        ListNode* next = head;
        ListNode* heada = head;
        ListNode* headprev = head;
        int i = 0;
        int first = 0;
        ListNode* temp = head;
        while (next != NULL) {
            i = 1;
            prev = temp;
            next = temp;
            curr = temp;
            headprev = temp;

            while (temp != NULL && i != k) {
                temp = temp->next;
                if (temp == NULL)
                    break;
                i++;
            }
            if (i == k) {
                i = 0;
                prev = temp->next;
                temp = temp->next;
                while (i != k) {
                    next = curr->next;
                    curr->next = prev;
                    prev = curr;
                    curr = next;
                    i++;
                }
                if (first == 0) {
                    head = prev;
                    first = 1;
                } else {
                    heada->next = prev;
                    heada = headprev;
                }
            } else {
                break;
            }
        }
        return head;
    }
};