class Solution {
public:
    int reachNumber(long long target) {
        target = abs(target);
        long long n = ceil((-1 + sqrt(1 + 8*target))/2);
        long long sum = n*(n+1)/2;

        long long delta = sum - target;
        if(delta%2 == 0){
            return n;
        }
        else if((n+1)%2 != 0){
            return n+1;
        }
        else{
            return n+2;
        }
    }
};