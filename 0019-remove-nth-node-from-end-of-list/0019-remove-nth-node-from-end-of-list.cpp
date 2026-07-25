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
        ListNode* temp = new ListNode;
        temp = head;
        int count = 0, i = 0;
        if(head == NULL) return NULL;
        while (temp != NULL) {
            temp = temp->next;
            count++;
        }
        if(count == n) return head->next;
        temp = head;
        for (i = 0; i < count - n - 1; i++) {
            temp = temp->next;
        }
        if(temp != NULL && temp->next != NULL && temp->next->next != NULL ) {
        temp->next = temp->next->next;
        }
        else{
            temp->next = NULL;
        }
        return head;
    }
};