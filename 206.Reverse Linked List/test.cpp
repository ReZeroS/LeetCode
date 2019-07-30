/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *p = head;
        if(!p || !p->next) return p;
        ListNode *q = p->next;
        ListNode *r = q->next ? q->next : nullptr;
        p->next = nullptr;
        while(r) {
            q->next = p;
            p = q;
            q = r;
            r = r->next;
        }
        q->next = p;
        return q;
    }
};
