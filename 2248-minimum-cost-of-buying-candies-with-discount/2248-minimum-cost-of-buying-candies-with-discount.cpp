class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int ans = 0 , n = cost.size();

        for(int i = 0; i<n; i){
            ans += cost[i];
            i++;
            if(i < n){
                ans += cost[i];
                i++;
            }
            if(i < n)
            i++;
        }
        return ans;
    }
};