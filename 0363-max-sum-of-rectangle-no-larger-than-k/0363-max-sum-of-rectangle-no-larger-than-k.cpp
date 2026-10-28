class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        int n = matrix[0].size();
        int max_ans = INT_MIN;
        
        for(int i = 0; i < m; i++){
            vector<int> nums(n, 0);
            for(int j = i; j < m; j++){
                for(int c = 0; c < n; c++){
                    nums[c] += matrix[j][c];
                }
                set<int> prefix_sums;
                prefix_sums.insert(0);
                int current_sum = 0;
                
                for(int x : nums){
                    current_sum += x;
                    auto it = prefix_sums.lower_bound(current_sum - k);
                    if(it != prefix_sums.end()){
                        max_ans = max(max_ans, current_sum - *it); 
                    }
                    prefix_sums.insert(current_sum);
                }
            }
        }
        return max_ans;
    }
};