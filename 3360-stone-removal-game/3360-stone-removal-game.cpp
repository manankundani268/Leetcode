class Solution {
public:
    bool canAliceWin(int n) {
        int stonesNeeded = 10;
        bool aliceTurn = true;

        while (n >= stonesNeeded) {
            n -= stonesNeeded;
            stonesNeeded--;
            aliceTurn = !aliceTurn;
        }
        return !aliceTurn;
    }
};