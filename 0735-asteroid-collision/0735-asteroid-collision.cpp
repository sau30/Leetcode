class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int> st;  // stack to store surviving asteroids

        for (int i = 0; i < ast.size(); i++) {
            int curr = ast[i];

            // Case 1: moving right â no collision possible
            if (curr > 0) {
                st.push(curr);
            }
            else {
                // curr is moving left â collision possible
                while (!st.empty() && st.top() > 0 && st.top() < abs(curr)) {
                    // stack asteroid is smaller â it explodes
                    st.pop();
                }

                // If equal size â both explode
                if (!st.empty() && st.top() == abs(curr)) {
                    st.pop();
                }
                // If stack empty OR top is also moving left â push current
                else if (st.empty() || st.top() < 0) {
                    st.push(curr);
                }
                // else: current asteroid gets destroyed â do nothing
            }
        }

        // Convert stack to vector (reverse order)
        vector<int> result(st.size());
        for (int i = st.size() - 1; i >= 0; i--) {
            result[i] = st.top();
            st.pop();
        }

        return result;
    }
};