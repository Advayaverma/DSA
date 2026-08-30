class Solution {
public:
    int beautySum(string s) {
        int sum = 0;
        unordered_map <char, int> mpp;
        for (int i = 0; i < s.size(); i++){
            mpp.clear();
            for (int j = i; j < s.size(); j++){
                char ch = s[j];
                mpp[ch]++;

                int mini = INT_MAX;
                int maxi = INT_MIN;

                for (auto x : mpp){
                    maxi = max (maxi, x.second);
                    mini = min (mini, x.second);
                }

                int beauty = maxi - mini;
                sum += beauty;
            }
        }
        return sum;
        
    }
};