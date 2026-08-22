class Solution {
public:
    int expandAroundCenter(string s, int i, int j){
        int count = 0;
        while (i >= 0 && j < s.length() && s[i] == s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }

    int countSubstrings(string s) {
        int total = 0;
        for (int center = 0; center < s.length(); center++){
            int i = center;
            int j = center;
            int oddPalSubStrCnt = expandAroundCenter(s,i,j);

            i = center;
            j = center + 1;
            int evenPalSubStrCnt = expandAroundCenter(s,i,j);

            total += oddPalSubStrCnt + evenPalSubStrCnt;
        }
        return total;
    }
};