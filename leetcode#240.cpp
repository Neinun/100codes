static auto x = []() {ios_base::sync_with_stdio(false);cin.tie(NULL);return nullptr;}();

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        int i = 0;
        int j = columns-1;
        while(i>=0&& i<rows && j>=0 && j<columns)
        {
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]>target)
                j--;
            else if(matrix[i][j]<target)
                i++;
        }
        return false;
        
    }
};
