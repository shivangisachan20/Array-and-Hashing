class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int rem=0,currsum=0,count=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            currsum+=nums[i];
            rem=currsum%k;
            
            if(rem<0) // if current sum is negative
                rem+=k;
            
            if(mp.find(rem)!=mp.end()) // if element is found
                count+=mp[rem];
            mp[rem]+=1;
                
        }
        return count;
        
    }
};