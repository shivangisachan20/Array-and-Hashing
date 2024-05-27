class Solution {
public:
    int M = 1e9+7;
    int t[100001][2][3];
    int solve(int n,int Absent,int consecutivelate)
    {
       if(Absent >= 2 || consecutivelate >= 3) {
            return 0;
        }
        if(n==0) return 1;
        
        if(t[n][Absent][consecutivelate]!=-1)
            return t[n][Absent][consecutivelate];
        
        int A = solve(n-1,Absent+1,0);
        int L= solve(n-1,Absent,(consecutivelate+1));
        int P=solve(n-1,Absent,0);
        return t[n][Absent][consecutivelate]=((A+L)%M+P)%M;
    }
    int checkRecord(int n) 
    {
      memset(t,-1,sizeof(t));
      return solve(n,0,0);
        
        
    }
};