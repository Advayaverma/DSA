//GFG: Sum of two numbers represented as arrays

class Solution {
  public:
    string calc_Sum(vector<int>& arr1, vector<int>& arr2) {
        int n1 = arr1.size(), n2 = arr2.size();
        int i = n1 - 1, j = n2 - 1, carry = 0;
        vector<int> result;

        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry;

            if (i >= 0) sum += arr1[i--];
            if (j >= 0) sum += arr2[j--];

            result.push_back(sum % 10);
            carry = sum / 10;
        }

        reverse(result.begin(), result.end());
        string s="";
        for(int i:result){
            s+=char(int('0')+i);
        }
        return s;
    }
};