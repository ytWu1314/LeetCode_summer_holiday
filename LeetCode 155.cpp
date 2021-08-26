class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }
    stack<int> stk,f;
    void push(int val) {
        stk.push(val);
        if(f.empty() || f.top() >=val) f.push(val);
    }
    
    void pop() {
        if(stk.top()<=f.top()) f.pop();
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return f.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */