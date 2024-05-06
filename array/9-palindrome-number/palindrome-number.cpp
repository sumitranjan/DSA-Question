class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int revNo = 0;
        int num = x;
        while(x>0){
            int lastDigit = x % 10;
            if (revNo > INT_MAX / 10 || (revNo == INT_MAX / 10 && lastDigit > INT_MAX % 10)) {
            return false;
        }
            revNo = revNo * 10 +  lastDigit;
            x = x/10;
        }
        return num == revNo;

    }
};