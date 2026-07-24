/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    struct ListNode* agla = NULL;
    struct ListNode* saveprev = NULL;
    struct ListNode* saveprev2 = NULL;
    int i;
    if(head == NULL || head->next == NULL) return head;
    for (i = 0; i < left-1; i++) {
        prev = curr;
        curr = curr->next;
    }
    if(left == 1) saveprev = NULL;
    else saveprev = prev;
    
    saveprev2 = curr;
    agla = curr;
    while (i < right) {
        agla = curr->next;
        curr->next = prev;
        prev = curr;
        curr = agla;
        i++;
    }
    if(left == 1){
        head = prev;
    }else saveprev->next = prev;
    
    saveprev2->next = curr;
    return head;
}