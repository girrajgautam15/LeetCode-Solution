#include<bits/stdc++.h> 
int f(int ind,vector<int> &nums,vector<int> &dp){
    if(ind==0) return nums[0];
    if(ind<0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int pick = nums[ind] + f(ind-2,nums,dp);
    int npick = 0 + f(ind-1,nums,dp);
    return dp[ind]=max(pick,npick);
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n = nums.size();
//     vector<int> dp(n+1,-1);
//     return f(n-1,nums,dp);
    int prev=nums[0];
    int prev2=0;
    for(int i=1;i<n;i++){
        int take = nums[i];
        if(i>1) take+=prev2;
        
        int ntake = 0+prev;
        int curr=max(take,ntake);
        prev2=prev;
        prev=curr;
    }
    return prev;
}