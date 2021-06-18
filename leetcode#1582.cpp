class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        
        int i,j;
        int cols = mat[0].size();
        int rows = mat.size();
        vector<int> row(rows,0);
        vector<int> col(cols,0);
        
        int counter = 0;
        for(i = 0; i< rows; i++)
        {
            for(j = 0; j<cols; j++)
            {
                if(mat[i][j] == 1)
                {
                    row[i]++;
                    col[j]++;
                }
                
            }
        }
        for(i = 0; i< rows; i++)
        {
            for(j = 0; j<cols; j++)
            {
                if(mat[i][j] == 1)
                    if(row[i] == 1 && col[j] == 1)
                        counter++;
            }
        }
        return counter;
        
        
    }
        
    
};
