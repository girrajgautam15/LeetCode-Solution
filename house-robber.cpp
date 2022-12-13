class Solution {
public:
    int f(vector<int> &nums,int ind,vector<int> &dp){
        if(ind<0) return 0;
        if(ind==0) return nums[ind];
        if(dp[ind]!=-1) return dp[ind];
        int left = 0+f(nums,ind-1,dp);
        int right = nums[ind]+f(nums,ind-2,dp);
        return dp[ind]=max(left,right);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        vector<int> dp(nums.size(),-1);
        return f(nums,nums.size()-1,dp);    
    }
};