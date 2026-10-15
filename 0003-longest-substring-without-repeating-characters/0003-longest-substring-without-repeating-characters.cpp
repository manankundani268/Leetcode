class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int len = 0;
        int n = s.length();
        vector<int> freq(128,0);
        for(right=0;right<n;right++){
            freq[s[right]]++;
            while(freq[s[right]]>1){
                freq[s[left]]--;
                left++;
            }
            len = max(len,right-left+1);
        }
        return len;
    }
};