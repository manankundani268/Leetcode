class Solution {
public:
    int maxDepth(string s) {
        int max_depth = 0;
        int count = 0;
        for(char c:s){
            if(c == '('){
                count++;
                max_depth = max(max_depth,count);
            }
            else if(c == ')'){
                count--;
            }
        }
        return max_depth;
    }
};