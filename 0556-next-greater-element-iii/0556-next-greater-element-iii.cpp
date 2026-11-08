class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        int len = s.length();

        int i = len-1;
        while(i>0 && s[i-1] >= s[i]){
            i--;
        }

        if(i==0) return -1;

        int pivot = i-1;
        int j = len-1;
        while(s[j]<=s[pivot]){
            j--;
        }

        swap(s[pivot],s[j]);
        reverse(s.begin() + i,s.end());

        long long result = stoll(s);
        if(result > INT_MAX){
            return -1;
        }
        return result;
    }
};