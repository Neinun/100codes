class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0;
        int n = letters.size();
        int end = n-1;
        int mid,next,prev;
        while(start<=end)
        {
            mid = start + (end-start)/2;
            next = (mid + 1) % n;
            if(letters[mid] == target)
            {
                if(letters[next]!=letters[mid])
                    return letters[next];
                else
                    start = mid + 1;
            }
                
            else if(letters[mid]<target)
            {
                start = mid + 1;
            }
            else
                end = mid - 1; 
        }
        if(start>(n-1))
            return letters[0];
        else
            return letters[start];
    }
};
