// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// Leetcode 34: Find First and Last Position in Sorted Array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};
        int low = 0, high = nums.size() - 1;

        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > target) {
                high = mid - 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                ans[0] = mid;   
                high = mid - 1;   
            }
        }

        low = 0;
        high = nums.size() - 1;

        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > target) {
                high = mid - 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                ans[1] = mid;   
                low = mid + 1;   
            }
        }

        return ans;
    }
};