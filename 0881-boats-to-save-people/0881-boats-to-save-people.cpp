class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int left = 0;
        int n = people.size();
        int right = n-1;
        int boats = 0;
        while(left<=right){
            if(people[left] + people[right] <= limit){
                left++;
            }
            boats++;
            right--;
        }
        return boats;
    }
};