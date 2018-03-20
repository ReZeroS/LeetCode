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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int a1 = l1?l1->val:0;
        int b1 = l2?l2->val:0;
        
        ListNode* p = new ListNode((a1 + b1) % 10);
        ListNode* ans = p;
        int carry = (a1 + b1) / 10;
        
        l1 = l1?l1->next:NULL;
        l2 = l2?l2->next:NULL;
        
        while(l1 || l2){
            int a = l1?l1->val:0;
            int b = l2?l2->val:0;
            int sum = a + b + carry;
            int rest = sum%10;
            
            p->next = new ListNode(rest);
            p = p->next;
            
            
            carry = sum/10;
            l1 = l1?l1->next:NULL;
            l2 = l2?l2->next:NULL;
        
        }
        if(carry == 1){
            p->next = new ListNode(1);
            p = p->next;
        }
        
        
        return ans;
    }
};
