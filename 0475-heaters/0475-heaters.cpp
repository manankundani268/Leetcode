class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(),heaters.end());
        int maxR = 0;
        for(int house : houses){
            auto n = lower_bound(heaters.begin(),heaters.end(),house);
            int distR = (n != heaters.end()) ? (*n - house) : INT_MAX;
            int distL = (n != heaters.begin()) ? (house - *(n-1)) : INT_MAX;
            maxR = max(maxR , min(distR,distL));
        }
        return maxR;
    }
};