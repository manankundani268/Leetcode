class Solution {
public:
    int getNext(int n){
        int totalsum = 0;
        while(n>0){
            int digit = n%10;
            totalsum += digit*digit;
            n /= 10;
        }
        return totalsum;
    }

    bool isHappy(int n) {
        int a = n;
        int b = getNext(n);
        while(b != 1 && b != a){
            a = getNext(a);
            b = getNext(getNext(b));
        }
        return b ==1;
    }
};