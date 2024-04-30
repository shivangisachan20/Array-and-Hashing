// **Memoization**
`class Solution {
// Memoization
public:
int t[101][101];
int countsteps(int ringIndex,int i, int n)
{
int dist=abs(i-ringIndex);
int wraparound=(n-dist);
return min(dist,wraparound);
}
int solve(int ringIndex,int keyIndex,string& ring, string& key)
{
if(keyIndex==key.length()) return 0;
if(t[ringIndex][keyIndex]!=-1)
return t[ringIndex][keyIndex];
int result=INT_MAX;
for(int i=0;i<ring.length();i++)
{
if(ring[i]==key[keyIndex])
{
int totalsteps=countsteps(ringIndex,i,ring.length())+1+
solve(i,keyIndex+1,ring,key);
result=min(result,totalsteps);
}
}
return t[ringIndex][keyIndex]=result;
}
int findRotateSteps(string ring, string key) {
memset(t,-1,sizeof(t));
return solve(0,0,ring,key);
}
};`