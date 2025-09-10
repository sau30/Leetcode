#include <stack>
using namespace std;

class MinStack {
    stack<int> s;   // tracks all values
    stack<int> st;  // tracks min values
public:
    void push(int val) {
        s.push(val);
        if (st.empty() || val <= st.top())
            st.push(val);
    }

    void pop() {
        if (!s.empty() && s.top() == st.top())
            st.pop();
        if (!s.empty())
            s.pop();
    }

    int top() {
        if (s.empty()) {
            return -1;
        } else {
            return s.top();
        }
    }

    int getMin() {
        if (st.empty()) {
            return -1;
        } else {
            return st.top();
        }
    }
};
