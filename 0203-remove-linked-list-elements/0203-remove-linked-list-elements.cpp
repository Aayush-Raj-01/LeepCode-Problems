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
    ListNode* removeElements(ListNode* head, int val) {
        struct ListNode* temp = head;
        if(head == NULL)return head;
        while(temp->next != NULL){
            if(temp->next != NULL && temp->next->val == val){
                temp->next = temp->next->next;
            }
            else if(temp->next != NULL && temp->next->next == NULL && temp->next->val == val){
                temp->next = NULL;
            }else 
            temp = temp->next;
        }
        if(head->val == val){
            if(head->next==NULL) head = NULL;
            else{
                head = head->next;
            }
        }
        return head;
        
    }
};