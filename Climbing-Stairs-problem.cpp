class Solution {
public:
    int f(int ind, vector<int> &dp){
        if(ind==0) return 1;
        if(ind==1) return 1;
        if(dp[ind]!=-1) return dp[ind];
        int left = f(ind-1,dp);
        int right = f(ind-2,dp);
        return dp[ind] = left+right;
    }

    int climbStairs(int n) {
    //     if(n==0) return 1;
    //     if(n==1) return 1;
    //     int left = climbStairs(n-1);
    //     int right = climbStairs(n-2);
    //     return left + right;
    // }
    vector<int> dp(n+1,-1);
    return f(n,dp);
    }
};