class Solution 
{
public:
    int maxDepth(string s) 
    {
        stack<char>c;
        int count=0;
        int res=0;
        
        for(char c:s)
        {
            if(c=='(')
            {
                count++;
                res=max(count,res);
            }
            else if(c==')')
            count--;
                
        }
        return res;
     }
};