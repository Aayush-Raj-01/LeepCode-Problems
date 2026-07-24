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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = new ListNode;
        ListNode* temp1 = new ListNode;
        if(head == NULL || head->next == NULL) return head;
        int count = 0,i=0;
        temp = head;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }

        k %= count;
        if(k==0)return head;
        
        temp = head;
        while(i < count-k-1){
            temp=temp->next;
            i++;
        }
        temp1 = temp->next; 
        temp->next = NULL;
        temp = temp1;
        while(temp != NULL && temp->next != NULL){
            temp = temp->next;
        }
        temp->next = head;
        return temp1;
    }
};