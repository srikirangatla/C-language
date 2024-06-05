struct ListNode {
    int val;
    struct ListNode *next;
};


struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return head;

    struct ListNode* ptr_a = head;
    struct ListNode* ptr_b = head;
    while (true) {
        while (ptr_a->val == ptr_b->val) {
            ptr_b = ptr_b->next;
            if (ptr_b == NULL) {
                ptr_a->next = NULL;
                return head;
            }
        }
        ptr_a->next = ptr_b;
        ptr_a = ptr_a->next;
    }
}