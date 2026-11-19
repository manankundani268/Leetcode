class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        int left = nums[n-1] - nums[2];
        int right = nums[n-3] - nums[0];
        int both = nums[n-2] - nums[1];
        return min({left,right,both});
    }
};