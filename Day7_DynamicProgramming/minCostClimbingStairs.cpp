class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        if(n==0) return 0;
        
        if(n==1)
            return cost[0];
        
        if(n==2)
            min(cost[0], cost[1]);
        
        int dp[n];
        dp[0] = cost[0];
        dp[1] = cost[1];
        
        for(int i = 2; i <n; i++){ 
             dp[i] = min(dp[i-2], dp[i-1])+cost[i];    
        }
        
        
        for( int x: dp)
            cout<<x<<" ";
        
        return min(dp[n-1],dp[n-2]); 
        
        
    }
};