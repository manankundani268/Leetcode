/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
private:
    int mountaninAsc(MountainArray &mountainArr,int target,int low,int high){
        while(low<=high){
            int mid = low + (high-low)/2;
            int val = mountainArr.get(mid);
            if(val == target) return mid;
            else if(val < target) low = mid + 1;
            else high = mid-1;
        }
        return -1;
    }
    int mountaninDes(MountainArray &mountainArr,int target,int low,int high){
        while(low<=high){
            int mid = low + (high-low)/2;
            int val = mountainArr.get(mid);
            if(val == target) return mid;
            else if(val < target) high = mid - 1;
            else low = mid+1;
        }
        return -1;
    }


public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int low = 0;
        int high = n-1;
        while(low<high){
            int mid = low + (high-low)/2;
            if(mountainArr.get(mid) < mountainArr.get(mid+1)){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        int peak = low;
        int result = mountaninAsc(mountainArr,target,0,peak);
        if(result != -1){
            return result;
        }
        else{
            return  mountaninDes(mountainArr,target,peak,n-1);
        }

    }
};