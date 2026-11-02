class Solution {
    void solve(int i,int total,int target,vector<int>& nums,vector<int>& res,vector<vector<int>>& ans){
        if(total==target){
            ans.push_back(res);
            return;
        }
        if(total>target || i>=nums.size()){
            return;
        }
        res.push_back(nums[i]);
        solve(i,total+nums[i],target,nums,res,ans);
        res.pop_back();
        solve(i+1,total,target,nums,res,ans);

    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>res;
        int total;
        solve(0,0,target,nums,res,ans);
        return ans;
    }
};
