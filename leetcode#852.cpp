class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int n = arr.size();
        int end = n-1;
        int mid,prev,next;
        while(start<=end)
        {
            mid = start + (end-start)/2;
            prev = (mid + n -1 ) % n;
            next = (mid + 1) % n;
            if(arr[mid]>arr[prev] && arr[mid]>arr[next])
                return mid;
            else if(arr[mid]<arr[prev])
                end = mid -1;
            else if(arr[mid]<arr[next])
                start = mid+1;
        }
        return -1;
    }
};
