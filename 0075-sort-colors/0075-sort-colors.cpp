class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
       int index=0;
        for(auto it:m)
        {
            int key=it.first;
            while(m[key]!=0)
            {
               nums[index] = key;
                index++;
                m[key]--;
            }
        }
  
    }
};