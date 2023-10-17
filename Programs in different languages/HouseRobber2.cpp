class Solution {
public:
    int rob(vector<int>& v) {
        int n=v.size();
        if(n==1){
            return v[0];
        }
       vector<int>dp(n,0);
       dp[0]=v[0];
       dp[1]=max(v[1],v[0]);
       for(int i=2;i<v.size()-1;i++){
           dp[i]=max(dp[i-1],dp[i-2]+v[i]);
       }
       vector<int>dp1(n,0);
       dp1[0]=0;
       dp1[1]=v[1];
       for(int j=2;j<n;j++){
           dp1[j]=max(dp1[j-1],v[j]+dp1[j-2]);
       }
       return max(dp1[n-1],dp[n-2]);
    }
};
