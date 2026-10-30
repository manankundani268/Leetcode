class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> seen;
        int max_sum = 0;
        int n = nums.size();
        int left = 0;
        int cur_sum = 0;
        for(int right=0;right<n;right++){
            while(seen.count(nums[right])){
                seen.erase(nums[left]);
                cur_sum -= nums[left];
                left++;
            }
            seen.insert(nums[right]);
            cur_sum += nums[right];
            max_sum = max(max_sum,cur_sum);
        }
        return max_sum;
    }
};