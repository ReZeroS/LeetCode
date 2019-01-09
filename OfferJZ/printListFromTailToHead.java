/**
*    public class ListNode {
*        int val;
*        ListNode next = null;
*
*        ListNode(int val) {
*            this.val = val;
*        }
*    }
*
*/
import java.util.ArrayList;
public class Solution {
    private ArrayList arrays = new ArrayList<Integer>();
    public ArrayList<Integer> printListFromTailToHead(ListNode listNode) {
        recur(listNode);
        return arrays;
    }
    
    public void recur(ListNode listNode){
        if(listNode == null){
            return ;
        }
        recur(listNode.next);
        arrays.add(listNode.val);
    }
    
    
    
}
