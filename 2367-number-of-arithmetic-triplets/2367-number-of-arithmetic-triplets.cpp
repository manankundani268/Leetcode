class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> seen(nums.begin(),nums.end());
        int count = 0;
        for(int x:nums){
            if(seen.count(x-diff) && seen.count(x-2*diff)){
                count++;
            }
        }
        return count;
    }
};