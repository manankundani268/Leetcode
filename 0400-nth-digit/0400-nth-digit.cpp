class Solution {
public:
    int findNthDigit(long long n) {
        long long len = 1;
        long long count = 9;
        int start = 1;
        while(n>len*count){
            n -= len*count;
            len++;
            count *= 10;
            start *= 10;
        }
        long long targetNum = start + (n-1)/len;
        string s = to_string(targetNum);
        int digitIndex = (n-1)%len;

        return s[digitIndex] - '0';
    }
};