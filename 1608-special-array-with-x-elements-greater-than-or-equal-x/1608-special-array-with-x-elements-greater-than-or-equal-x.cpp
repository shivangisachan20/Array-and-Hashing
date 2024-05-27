class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int x=0;x<=nums.size();x++)
        {
            int index=lower_bound(nums.begin(),nums.end(),x)-nums.begin();
            int count=nums.size()-index;
            if(count==x)
                return x;
        }
       return -1; 
    }
};