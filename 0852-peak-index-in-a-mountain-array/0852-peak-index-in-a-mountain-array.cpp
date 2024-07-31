class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       
       int left = 0;
        int right = arr.size() - 1;
        while(left <= right)
        {
            int cur = left + (right - left) / 2;
            if(arr[cur] > arr[cur + 1] && arr[cur] > arr[cur - 1]) 
                return cur;
            
            if(arr[cur] > arr[cur + 1])
                right = cur -1;
            else 
                left = cur + 1;
        }
        return -1;
    }
};