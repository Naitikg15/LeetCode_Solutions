/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode Node;
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;
    
    Node* mergedHead = NULL;
    Node* mergedTail = NULL;

    if (list1->val < list2->val) {
        mergedHead = mergedTail = list1;
        list1 = list1->next;
    } else {
        mergedHead = mergedTail = list2;
        list2 = list2->next;
    }

    while (list1 != NULL && list2 != NULL) {
        if (list1->val < list2->val) {
            mergedTail->next = list1;
            mergedTail = list1;
            list1 = list1->next;
        } else {
            mergedTail->next = list2;
            mergedTail = list2;
            list2 = list2->next;
        }
    }

    if (list1 != NULL) mergedTail->next = list1;
    if (list2 != NULL) mergedTail->next = list2;

    return mergedHead;

}