class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftsum = 0;
        int n = cardPoints.size();
        int right = n-1;
        int rightsum = 0;

        int sum = 0;
        for(int i=0;i<k;i++){
            leftsum += cardPoints[i];
            
        }
        sum = leftsum;
        for(int i=k-1;i>=0;i--){
            leftsum -= cardPoints[i];
            rightsum += cardPoints[right];
            right--;
            sum = max(sum,leftsum+rightsum);

        }
        return sum;
    }
};