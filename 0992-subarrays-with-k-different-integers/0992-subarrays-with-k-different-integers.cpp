class Solution {
public:
    int good(vector<int>& nums, int k){
        int left = 0;
        int count = 0;
        unordered_map<int,int> freq;
        int n = nums.size();
        for(int right = 0;right<n;right++){
            if(freq[nums[right]] == 0){
                k--;
            }
            freq[nums[right]]++;
            while(k<0){
                freq[nums[left]]--;
                if(freq[nums[left]] == 0){
                    k++;
                }
                left++;
            }
            count += (right-left+1);
        }
        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return good(nums,k) - good(nums,k-1);
    }
};