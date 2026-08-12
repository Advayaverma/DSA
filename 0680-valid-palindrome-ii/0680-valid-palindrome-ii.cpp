class Solution {
public:
    bool checkPalindrome(string str, int s, int e){
        while (s <= e){
            if (str[s] != str[e]){
                return false;
            }
            else{
                s++;
                e--;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while (i <= j){
            if (s[i] == s[j]){
                i++;
                j--;
            }
            else{
                bool ans1 = checkPalindrome(s, i + 1, j);
                bool ans2 = checkPalindrome(s, i, j - 1);

                return ans1 || ans2;
            }
        }   
        return true;
    }
};