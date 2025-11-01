//GFG First Repeating Element

class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
        unordered_map <int, int> mpp;
        for (int i : arr){
            mpp[i]++;
        }
        
        for (int i = 0; i < arr.size(); i++){
            if (mpp[arr[i]] > 1){
                return i+1;
            }
        }
        return -1;
    }
};