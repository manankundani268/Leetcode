class Solution {
public:
    string frequencySort(string s) {
        int n = s.length();
        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;
        }
        vector<vector<char>> buckets(n+1);
        for(const auto& [ch,count] : freq){
            buckets[count].push_back(ch);
        }
        string result = "";
        for(int i = n;i>0;i--){
            for(char ch:buckets[i]){
                result.append(i,ch);
            }
        }
        return result;
    }
};