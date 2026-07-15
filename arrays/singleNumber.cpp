// Leetcode 136: Single Number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int, int> freq;

        for (int i = 0; i < nums.size(); i++){
            int num = nums[i];
            freq[num] += 1;
        }

        unordered_map <int, int> :: iterator it;
        for (it = freq.begin(); it != freq.end(); it++){
            if (it->second == 1){
                return it->first;
            }
        }
        return -1;
    }
};


// using for each

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int, int> freq;

        for (int i = 0; i < nums.size(); i++){
            int num = nums[i];
            freq[num] += 1;
        }

        for (auto x : freq){
            if (x.second == 1){
                return x.first;
            }
        }
        return -1;
    }
};