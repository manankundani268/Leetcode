class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int left = 0;
        int right=0;
        while(right<n){
            int count = 0;
            char cur_char = chars[right];
            while(right<n && chars[right] == cur_char){
                count++;
                right++;
            }
            chars[left] = cur_char;
            left++;
            if(count>1){
                string count_str = to_string(count);
                for(char c:count_str){
                    chars[left] = c;
                    left++;
                }
            }
        }
        return left;
    }
};