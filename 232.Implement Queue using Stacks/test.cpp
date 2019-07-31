class MyQueue {
public:
    stack<int> a, b;
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        while(!a.empty()) {
            b.push(a.top());
            a.pop();
        }
        a.push(x);
        while(!b.empty()) {
            a.push(b.top());
            b.pop();
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int e = a.top();
        a.pop();
        return e;
    }
    
    /** Get the front element. */
    int peek() {
        return a.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
