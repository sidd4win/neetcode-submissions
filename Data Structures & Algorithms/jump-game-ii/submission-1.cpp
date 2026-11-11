class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0;
        int l=0;
        int r=0;
        int n=nums.size();
        while(r<n-1){
            int farther=0;
            for(int i=l;i<=r;i++){
                farther=max(farther,i+nums[i]);
            }
            l=r+1;
            r=farther;
            jumps++;
        }
        return jumps;
    }
};
