class Solution {
public:
    int minChanges(string s) {
        char currentChar = s[0];
        int consCount = 0;
        int changes = 0;
        for(int i = 0;i<s.length();i++){
            if(currentChar == s[i]){
                consCount++;
                continue;
            }
            if(consCount % 2 == 0){
                consCount = 1;
            }
            else{
                consCount = 0;
                changes++;
            }
            currentChar = s[i];
        }
        return changes;
    }
};