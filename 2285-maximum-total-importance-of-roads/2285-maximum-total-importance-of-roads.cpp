class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long> degree(n, 0);

        for (vector<int>& edge : roads) {
            degree[edge[0]]++;
            degree[edge[1]]++;
        }

        sort(degree.begin(), degree.end());

        long long value = 1;
        long long totalImportance = 0;
        for (int i=0;i<n;i++) 
        {
            totalImportance += (value * degree[i]);
            value++;
        }

        return totalImportance;
    }
};