public class Solution {
    Stack<Integer> stack1 = new Stack<Integer>();
    Stack<Integer> stack2 = new Stack<Integer>();

    public void push(int node) {
        stack1.push(node);
    }

    public int pop() {
        if(stack1.isEmpty() && stack2.isEmpty())
            throw new RuntimeException("Empty!");
        int node;
        if(stack2.isEmpty()){
            while(!stack1.isEmpty()){
                node = stack1.pop();
                stack2.push(node);
            }
        }
        return stack2.pop();

    }
}
