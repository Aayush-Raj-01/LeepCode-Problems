/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *curr = head;
    struct ListNode *prev = NULL;
    struct ListNode *next = NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
 }
bool isPalindrome(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    bool ans = false;

    while(true){
        if(fast == NULL || fast->next == NULL) break;
        slow = slow->next;
        fast = fast->next->next;
    }
    struct ListNode* second = reverseList(slow);
    while(true){
        if (second == NULL){
            return true;
        }
        else if(head->val == second->val){
            head = head->next;
            second = second->next;
        }
        else break;
    }
    return ans;

    
}