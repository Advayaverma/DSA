// Missing Number : Leetcode 268

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = n, low = 0, high = n - 1;
        sort(nums.begin(), nums.end());

        while (low <= high){
            int mid = low + (high - low) / 2;

            if (mid == nums[mid]){
                low = mid + 1;
            }
            else if (mid != nums[mid]){
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }
};