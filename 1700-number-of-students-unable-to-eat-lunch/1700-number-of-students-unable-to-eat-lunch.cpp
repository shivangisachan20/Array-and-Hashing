class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        while (!students.empty() && std::count(students.begin(), students.end(), sandwiches[0]) > 0) {
            if (students[0] == sandwiches[0]) {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
            } else {
                students.push_back(students[0]);
                students.erase(students.begin());
            }
        }
        return students.size();
        
    }
};