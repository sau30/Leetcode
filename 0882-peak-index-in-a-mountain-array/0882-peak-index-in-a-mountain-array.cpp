class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int high = arr.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] < arr[mid + 1]) {
                // increasing part
                low = mid + 1;
            } else {
                // decreasing part
                high = mid;
            }
        }
        return low; // or high (both same)
    }
};
