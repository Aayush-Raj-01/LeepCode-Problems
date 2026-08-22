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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *temp = head;
        ListNode *slow = head;
        ListNode *fast = head;
        int count = 0;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
        if(count == 1) return NULL;
        if(count < 3){
            head->next = NULL;
            return head;
        }
            fast = fast->next->next;
            while(fast != NULL && fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
            }
            slow->next = slow->next->next;
        return head;
    }
};