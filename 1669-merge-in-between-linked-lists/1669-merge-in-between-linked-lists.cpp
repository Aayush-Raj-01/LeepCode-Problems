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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *temp = list1;
        ListNode *temp1 = list1;
        int node = 0;
        while(node != a-1){
            temp = temp->next;
            node++;
        }
        temp1 = temp;
        while(node != b+1){
            temp1 = temp1->next;
            node++;
        }
        temp->next = list2;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = temp1;
        return list1;
        
    }
};