class Solution {
public:
    string minRemoveToMakeValid(string s) {
  stack<int> st;
  for (auto i = 0; i < s.size(); ++i) {
    if (s[i] == '(') st.push(i);
    if (s[i] == ')') {
      if (!st.empty()) st.pop();
      else s[i] = '*';
    }
  }
  while (!st.empty()) 
  {
// st.top() retrieves the element on the top of the stack st. This element represents the index of an opening parenthesis in the string s
      
    s[st.top()] = '*';
  st.pop();
  }
        
// The combination of std::remove and std::erase allows you to remove matching elements from the container so that container would actually get truncated if elements were removed.
  s.erase(remove(s.begin(), s.end(), '*'), s.end());
  return s;
}
};