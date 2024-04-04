class Solution {
public:
    int numUniqueEmails(vector<string>& emails) 
    {
        unordered_set<string>st;
        for(string &email:emails)
        {
            string cleanmail="";
            for(char ch:email)
            {
                // stop adding characters to localName
                if(ch=='@' || ch=='+') break;
                
                // skip the character
                if(ch=='.') continue;
                cleanmail+=ch;
                
                
            }
            cleanmail+=email.substr(email.find('@'));
            st.insert(cleanmail);
        }
        return st.size();
        
    }
};