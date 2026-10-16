class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        auto first = lower_bound(nums.begin(), nums.end(), target);
        auto last = upper_bound(nums.begin(), nums.end(), target);

        vector<int> ans;
        int startIdx = distance(nums.begin(), first);
        int endIdx = distance(nums.begin(), last);
        
        for (int i = startIdx; i < endIdx; i++) {
            ans.push_back(i);
        }
        return ans;
    }
};