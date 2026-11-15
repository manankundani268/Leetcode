class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        int left = 0;
        int right = nums.size() - 1;
        while(left<right){
            int cur_sum = nums[left] + nums[right];
            ans = max(ans,cur_sum);
            left++;
            right--;
        }
        return ans;
    }
};