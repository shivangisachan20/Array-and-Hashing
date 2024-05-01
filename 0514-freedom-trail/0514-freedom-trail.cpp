class Solution {
public:
    int countsteps(int ringIndex,int i, int n)
    {
        int dist=abs(i-ringIndex);
        int wraparound=(n-dist);
        return min(dist,wraparound);
    }
    int findRotateSteps(string ring, string key) 
    {
        int n=ring.length();
        int m=key.length();
        
        vector<vector<int>>t(n+1,vector<int>(m+1,INT_MAX));
        
        for(int ringIndex=0;ringIndex<n;ringIndex++)
        {
            t[ringIndex][m]=0;
            
        }
        for(int keyIndex=m-1;keyIndex>=0;keyIndex--)
        {
            for(int ringIndex=0;ringIndex<n;ringIndex++)
            {
                int result=INT_MAX;
                
                for(int i=0;i<n;i++ )
                {
                    if(ring[i]==key[keyIndex])
                    {
                        int total=countsteps(ringIndex,i,n)+1+t[i][keyIndex+1];
                        result=min(result,total);
                    }
                }
                t[ringIndex][keyIndex]=result;
            }
        }
return t[0][0];
        
    }
};