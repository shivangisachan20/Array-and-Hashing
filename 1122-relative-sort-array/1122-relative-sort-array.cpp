class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int ,int> k;
     for(int i=0;i<arr1.size();i++){
         k[arr1[i]]++;
     } 
     vector<int>  ans;  
     for(int i=0;i<arr2.size();i++){
         int kp=arr2[i];
         while(k[kp]){
             ans.push_back(kp);
             k[kp]--;
      }
     }
     for(auto it: k){
        int kp=it.first;
         while(k[kp]){
             ans.push_back(kp);
             k[kp]--;
      } 
     }
     return ans;

    }
};