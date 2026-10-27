class Solution {
public:
    int SumArray(vector<int>& nums, int goal){
        if(goal<0) return 0;
        int left = 0;
        int count = 0;
        int current_sum = 0;
        int n =nums.size();
        for(int right = 0;right<n;right++){
            current_sum += nums[right];
            while(current_sum > goal){
                current_sum -= nums[left];
                left++;
            }
            count += (right-left+1);
        }
        return count;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return SumArray(nums,goal) - SumArray(nums,goal-1);
    }
};