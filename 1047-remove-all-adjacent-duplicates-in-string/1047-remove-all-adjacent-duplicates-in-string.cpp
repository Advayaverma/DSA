class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int n = s.length();
        
        for (int i = 0; i < n; i++){
            if (ans.empty()){
                ans.push_back(s[i]);
            }

            else if (ans.back() != s[i]){
                ans.push_back(s[i]);
            }
            else{
                ans.pop_back();
            }
        }
        return ans;
    }
};