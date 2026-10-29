class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if(arr.size() < 3) return 0;
        int n = arr.size();
        int i = 0;
        int maxlen = 0;
        while(i<n){
            int base = i;
            while(base+1<n && arr[base+1] > arr[base]){
                base++;
            }
            if(base==i){
                i++;
                continue;
            }
            int peak = base;
            while(base+1<n && arr[base+1] < arr[base]){
                base++;
            }
            if(peak == base){
                i = peak;
                continue;
            }
            maxlen = max(maxlen,base-i+1);
            i = base;
        }
        return maxlen;
    }
};