class Solution {
public:
    int xorOperation(int n, int start) {
        
        int x;
        int result = start ;
        for(int i=1; i<n; i++)
        {
            x = start + 2*i;
            result = result ^ x;
        }
        return result;
    }
};
