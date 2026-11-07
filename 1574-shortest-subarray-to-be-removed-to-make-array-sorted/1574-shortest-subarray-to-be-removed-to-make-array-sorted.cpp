class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size();
        int right = n-1;
        while(right>0 && arr[right-1] <= arr[right]) right--;
        if(right == 0) return 0;

        int ans = right;
        int left = 0;
        while(left<right &&(left == 0|| arr[left-1] <= arr[left])){
            while(right<n && arr[left] > arr[right]) right++;
            ans = min(ans,right - left - 1);
            left++;
        }
        return ans;
    }
};