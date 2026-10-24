class Solution {
public:
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int toDay(string date){
        int m = (date[0] - '0')*10 + (date[1] - '0');
        int d = (date[3] - '0')*10 + (date[4] - '0');
        int total = d;
        for(int i=0;i<m-1;i++){
            total += days[i];
        }
        return total;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int start = max(toDay(arriveAlice), toDay(arriveBob));
        int end = min(toDay(leaveAlice), toDay(leaveBob));
        return (start<=end) ? (end-start+1) : 0;
    }
};