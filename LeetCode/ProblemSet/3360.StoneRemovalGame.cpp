class Solution {
public:
    bool canAliceWin(int n) {
        int remove = 10;
        bool aliceTurn = true;

        while(n >= remove && remove > 0){
            n -= remove;
            remove--;
            aliceTurn = !aliceTurn;
        }
        return !aliceTurn;
    }
};