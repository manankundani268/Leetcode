class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> check(3,0);
        int left = 0;
        int count = 0;
        int n = s.length();
        for(int right = 0;right<n;right++){
            check[s[right] - 'a']++;
            while(check[0] > 0 && check[1] > 0 && check[2] > 0){
                count += n-right;
                check[s[left] - 'a']--;
                left++;
            }
        }
        return count;
    }
};