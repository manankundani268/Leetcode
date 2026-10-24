class Solution {
public:
    bool threeFibonacciSum(int n) {
        if(n%2 ==1){
            return false;
        }
        int target = n/2;
        long long a=0,b=1;
        while(a<target){
            long long c = a+b;
            a=b;
            b=c;
        }
        return a==target;
    }
};