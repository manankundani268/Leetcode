class Solution {
public:
    string minWindow(string s, string t) {
        if(s.length()<t.length()) return "";
        if(t.empty() || s.empty()) return "";
        vector<int> tCount(128,0);
        for(char c : t){
            tCount[c]++;
        }
        int m = s.length();
        int n = t.length();
        int left = 0;
        int right = 0;
        int minlen = INT_MAX;
        int start = 0;
        while(right<m){
            if(tCount[s[right]] > 0){
                n--;
            }
            tCount[s[right]]--;
            right++;
            while(n==0){
                if(right-left<minlen){
                    minlen = right-left;
                    start = left;
                }
                tCount[s[left]]++;
                if(tCount[s[left]]>0){
                    n++;
                }
                left++;
            }
        }
        return minlen == INT_MAX ? "" : s.substr(start,minlen);
        
    }
};