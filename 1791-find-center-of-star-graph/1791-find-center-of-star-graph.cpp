class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> degree;

        for (auto edge : edges) {
            degree[edge[0]]++;
            degree[edge[1]]++;
        }

        for (auto nodes : degree) {
            int node = nodes.first;
            int nodeDegree = nodes.second;

            if (nodeDegree == edges.size()) {
                return node;
            }
        }

        return -1;
    }
};