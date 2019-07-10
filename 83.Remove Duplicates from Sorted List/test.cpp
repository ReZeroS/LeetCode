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
        if(head == nullptr) return nullptr;
        ListNode* p = head;
        ListNode* next = p->next;
        while(p != nullptr){
            while(next && next->val == p->val){
                next = next->next;
            }
            p->next = next;
            p = next;
            if(p) next = p->next;
        }
        return head;
    }
};
