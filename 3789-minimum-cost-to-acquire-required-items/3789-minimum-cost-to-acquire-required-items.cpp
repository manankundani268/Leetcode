class Solution {
public:
    long long minimumCost(long long cost1, long long cost2, long long costBoth, long long need1, long long need2) {
        long long c1 = cost1 * need1 + cost2 * need2;
        long long c2 = max(need1,need2) * costBoth;
        long long minNeed = min(need1,need2);
        long long c3 = minNeed * costBoth + (need1-minNeed)*cost1 + (need2-minNeed)*cost2;
        return min({c1,c2,c3});
    }
};