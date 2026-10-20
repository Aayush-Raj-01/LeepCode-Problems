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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* temp = head;
        ListNode* temp1 = head;
        set<int> st;
        for(int i: nums){
            st.insert(i);
        }
            while (temp != NULL) {
                if (st.find(temp->val) != st.end() && temp == head) {
                    temp = temp->next;
                    head = temp;
                } else if (st.find(temp->val) != st.end() && temp->next != NULL) {
                    temp1->next = temp->next;
                    temp = temp->next;
                }else if(st.find(temp->val) != st.end()){
                    temp1->next = NULL;
                    temp = NULL;
                }else{
                temp1 = temp;
                temp = temp->next;
                }
        }
        return head;
    }
};