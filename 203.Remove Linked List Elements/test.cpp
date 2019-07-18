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
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val == val) {head = head->next;}
        if(!head) return head;
        ListNode *prev = head;
        ListNode *suffix = prev;
        while(prev) {
            suffix = suffix->next;
            while(suffix && suffix->val == val){
                suffix = suffix->next;   
            }
            prev->next = suffix;
            prev = prev->next;
            
        }
        return head;
    }
};
