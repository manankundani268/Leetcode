class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min_val = *min_element(nums.begin(),nums.end());
        int count = 0;
        for(int num : nums){
            count += (num-min_val);
        }
        return count;
    }
};