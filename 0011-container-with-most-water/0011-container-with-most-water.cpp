class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int n = height.size();
        int right = n-1;
        int water = 0;
        while(left<right){
            int pointer = min(height[left],height[right]);
            water = max(water,pointer*(right-left));
            if(pointer == height[left]){
                left++;
            }
            else{
                right--;
            }
        }
        return water;
    }
};