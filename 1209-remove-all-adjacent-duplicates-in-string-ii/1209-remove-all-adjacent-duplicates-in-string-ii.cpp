class Solution {
public:
    string removeDuplicates(string s, int k) {
        string ans;

        for (char c : s) {
            ans.push_back(c);

            int n = ans.size();

            if (n >= k) {
                bool same = true;

                for (int i = n - k; i < n; i++) {
                    if (ans[i] != c) {
                        same = false;
                        break;
                    }
                }

                if (same) {
                    ans.erase(n - k, k);
                }
            }
        }

        return ans;
    }
};