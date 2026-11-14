class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.length();
        int curCost = 0;
        int len = 0;
        int left = 0;
        for(int right = 0;right<n;right++){
            curCost += abs(s[right] - t[right]);
            while(curCost > maxCost){
                curCost -= abs(s[left] - t[left]);
                left++;
            }
            len = max(len,right-left+1);
        }
        return len;
    }
};