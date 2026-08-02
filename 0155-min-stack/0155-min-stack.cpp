class MinStack {
    stack<int> st;
    stack<int> minst;

public:
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()){
            st.push(value);
            minst.push(value);
        }
        else{
            st.push(value);
            minst.push(min(value,minst.top()));
        }
    }
    
    void pop() {
        st.pop();
        minst.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */