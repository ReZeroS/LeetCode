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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;
        if(l1 == nullptr && l2 == nullptr) return nullptr;
        ListNode* root = new ListNode(l1->val < l2->val ? l1->val : l2->val);
        l1-> val < l2->val ? l1 = l1->next : l2 = l2->next;
        ListNode* ans = root;
        while(l1 && l2){
            if(l1->val < l2->val) {
                root->next = new ListNode(l1->val);
                l1 = l1->next;
            } else {
                root->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            root = root->next;
        }
        if(l1) root->next = l1;
        if(l2) root->next = l2;
        return ans;
    }
};
