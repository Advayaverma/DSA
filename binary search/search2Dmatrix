// Leetcode 74 Search a 2D Matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row , col , mid , left = 0 , right = m * n - 1;

        while (left <= right){
            mid = (left + right) / 2;
            row = mid / n;
            col = mid % n;

            if (matrix[row][col] == target){
                return true;
            }
            else if (matrix[row][col] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return false;
    }
};