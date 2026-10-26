class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int right = 0;
        int maxlen = 0;
        int maxfreq = 0;
        vector<int> hash(26,0);
        for(right = 0;right<s.length();right++){
            hash[s[right]-'A']++;
            maxfreq = max(maxfreq,hash[s[right]-'A']);
            while((right-left+1) - maxfreq>k){
                hash[s[left] - 'A']--;
                left++;
            }
            maxlen = max(maxlen,right-left+1);
            
        }
        return maxlen;
    }
};