class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int originalNo = x;
        long revNo = 0;
        while(x>0){
            revNo = (revNo * 10) + ( x % 10);
            x = x/10;
        }
        return revNo == originalNo;
    }
};