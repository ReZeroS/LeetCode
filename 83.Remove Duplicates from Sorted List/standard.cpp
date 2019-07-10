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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        ListNode *cur = head->next, *prev = head;
        while(cur) {
            if(cur->val == prev->val) {
                prev->next = cur->next;
                auto t = cur;
                cur = cur->next;
                delete t;
            } else {
                prev = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};
