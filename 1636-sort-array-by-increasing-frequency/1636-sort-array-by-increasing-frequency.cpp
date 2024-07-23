class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>map;
        for(auto it:nums)
        {
            map[it]++;
        }
        sort(nums.begin(),nums.end(),[&map](int a,int b)
             {
                if(map[a]==map[b])  return a>b;
                 else
                     return map[a]<map[b];
             });
        return nums;
    }
};
