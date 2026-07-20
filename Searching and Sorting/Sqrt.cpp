// Sqrt(x) : leetcode 69

class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = x/2, ans = -1;
        if (x <= 1) return x;
        while (low <= high){
            long long mid = low + (high - low) / 2;
            if (mid * mid == x){
                return mid;
            }
            if (mid * mid > x){
                high = mid - 1;
            }
            else if (mid * mid < x){
                ans = mid;
                low = mid + 1;
            }
        }
        return ans;
    }
};