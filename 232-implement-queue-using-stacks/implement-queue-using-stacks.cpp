class MyQueue {
public:
    stack<int>stack1;
    stack<int>stack2;
    MyQueue() {
        
    }
    void transferElements() {
        while (!stack1.empty()) {
            stack2.push(stack1.top());
            stack1.pop();
        }
    }
    void push(int x) {
        stack1.push(x);
    }
    
    int pop() {
        if (stack2.empty()) {
            transferElements();
        }
        int frontElement = stack2.top();
        stack2.pop();
        return frontElement;
    }
    
    int peek() {
        if (stack2.empty()) {
            transferElements();
        }
        return stack2.top();
    }
    
    bool empty() {
        return stack1.empty() && stack2.empty();
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