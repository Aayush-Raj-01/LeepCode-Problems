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
    ListNode* swapNodes(ListNode* head, int k) {
        struct ListNode *temp = new ListNode();
        struct ListNode *temp2 = new ListNode();
        struct ListNode *temp3 = new ListNode();
        temp = head;
        temp3 = head;
        int count=0;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
        temp = head;
        for(int i = 0;i <k-1 ;i++){
            temp = temp->next;
        }
        temp2->val = temp->val;
        for(int i = 0 ; i < count-k;i++){
            temp3 = temp3->next;
        }
        temp->val = temp3->val;
        temp3->val = temp2->val;

        return head;
    }
};