// Koko Eating Banana (Leetcode 875)

class Solution {
public:
    bool kokoFinishEating(vector<int>& piles, int h, int k){
        long long totalHours = 0;
        for (int i = 0; i < piles.size(); i++){
            totalHours += ceil(piles[i] / (double) k);
        }
        return totalHours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = 0;

        while (low <= high){
            int mid = low + (high - low) / 2;
            int k = mid;
            if (kokoFinishEating(piles, h, k)){
                ans = k;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};