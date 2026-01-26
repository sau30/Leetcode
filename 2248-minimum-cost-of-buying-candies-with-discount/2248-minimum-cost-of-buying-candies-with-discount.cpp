class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int ans = 0 , n = cost.size();

        for(int i = 0; i<n; i){
            ans += cost[i];//1st candy
            i++;
            if(i < n){
                ans += cost[i]; //second candy
                i++;
            }
            if(i < n) //third candy free
            i++;
        }
        return ans;
    }
};