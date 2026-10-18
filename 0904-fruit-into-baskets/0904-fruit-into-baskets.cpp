class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        vector<int> freq(100001,0);
        int left = 0;
        int maxlen = 0;
        int distinct_types = 0;
        for(int right=0;right<fruits.size();right++){
            if(freq[fruits[right]] == 0){
                distinct_types++;
            }
            freq[fruits[right]]++;
            if(distinct_types > 2){
                freq[fruits[left]]--;
                if(freq[fruits[left]] == 0){
                    distinct_types--;
                }
                left++;
            }
            maxlen = max(maxlen,right-left+1);
        }
        return maxlen;
    }
};