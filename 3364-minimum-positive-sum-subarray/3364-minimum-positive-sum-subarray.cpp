class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum = INT_MAX;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int curSum = 0;
            for(int j = i;j<n;j++){
                curSum += nums[j];
                int length = j-i+1;

                if(length > r){
                    break;
                }
                if(length >= l && curSum > 0){
                    sum = min(sum,curSum);
                }
            }
        }
        return (sum==INT_MAX) ? -1 : sum;
    }
};