// Single Element in a Sorted Array (Leetcode: 540)

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        while (low <= high){
            int mid = low + (high - low) / 2;
            if (low == high){
                return nums[low];
            }
            int currVal = nums[mid];
            int leftVal = -1;
            if (mid - 1 >= 0){
                leftVal = nums[mid - 1];
            }
            int rightVal = -1;
            if (mid + 1 < nums.size()){
                rightVal = nums[mid + 1];
            }
            if (currVal != leftVal && currVal != rightVal){
                return currVal;
            }
            else if (currVal == leftVal){
                int firstIndex = mid - 1;
                if (firstIndex & 1){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }
            else if (currVal == rightVal){
                int firstIndex = mid;
                if (firstIndex & 1){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                } 
            }
            
        } 

        return -1;
    }
};