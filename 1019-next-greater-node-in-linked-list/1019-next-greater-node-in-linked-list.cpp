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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode *temp=head;
        ListNode *temp1=head;
        while(temp != NULL){
            int larg = temp->val;
            temp1= temp;
            while(temp1->next != NULL){
                temp1 = temp1->next;
                if(temp1->val > larg){
                    larg = temp1->val;
                    ans.push_back(larg);
                    break;
                } 
            }
            if(temp->val == larg) ans.push_back(0);
            temp = temp->next;
        }
        return ans;
    }
};