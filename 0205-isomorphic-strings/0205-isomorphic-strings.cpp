class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;
        vector<int> s_seen(256,0);
        vector<int> t_seen(256,0);
        for(int i=0;i<s.length();i++){
            char s_char = s[i];
            char t_char = t[i];
            if(s_seen[s_char] != t_seen[t_char]){
                return false;
            }
            s_seen[s_char] = i+1;
            t_seen[t_char] = i+1;
        }
        return true;
    }
};