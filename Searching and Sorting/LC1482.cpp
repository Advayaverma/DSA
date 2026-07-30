// leetcode 1482: Minimum Number of Days to Make m Bouquets

class Solution {
public:
    bool function (vector<int>& bloomDay, int m, int k, int D){
        int counter = 0;
        for (int i = 0; i < bloomDay.size(); i++){
            if (bloomDay[i] <= D){
                counter++;
            }
            if (counter == k){
                m--;
                counter = 0;
                if (m == 0) break;
            }
            else if (bloomDay[i] > D){
                counter = 0;
            }
        }
        return m == 0;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        double req = (double)m * (double)k;
        if (bloomDay.size() < req) return -1;

        int start = * min_element(bloomDay.begin(), bloomDay.end());
        int end = * max_element(bloomDay.begin(), bloomDay.end()); 
        int ans = 0;

        while (start <= end){
            int mid = start + (end - start) / 2;
            int day = mid;
            if (function (bloomDay, m,  k, day)){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }
};