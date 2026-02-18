#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_set<int> on;

        for(int x : bulbs) {
            if(on.count(x))
                on.erase(x);   // toggle off
            else
                on.insert(x);  // toggle on
        }

        vector<int> ans(on.begin(), on.end());
        sort(ans.begin(), ans.end());
        return ans;
    }
};
