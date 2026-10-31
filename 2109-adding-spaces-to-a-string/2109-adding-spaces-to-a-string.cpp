class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string result;
        int space = 0;
        int n = spaces.size();
        int m = s.length();
        for(int i = 0;i<m;i++){
            if(space<n && i == spaces[space]){
                result.push_back(' ');
                space++;
            }
            result.push_back(s[i]);
        }
        return result;
    }
};