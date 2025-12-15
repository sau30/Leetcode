class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int lucky = -1;

        for (int i = 0; i < arr.size();) {
            int count = 0;
            int val = arr[i];

            while (i < arr.size() && arr[i] == val) {
                count++;
                i++;
            }

            if (count == val) {
                lucky = max(lucky, val);
            }
        }
        return lucky;
    }
};
