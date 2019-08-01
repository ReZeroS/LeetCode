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
    bool isPalindrome(ListNode* head) {
        return check(head, head);
    }
    
    
    bool check(ListNode*& p, ListNode* q){
        if(!q) return true;
        bool isPali = check(p, q->next);
        if(p->val != q->val){
            return false;
        }
        p = p->next;
        return isPali;
    }
    
};
