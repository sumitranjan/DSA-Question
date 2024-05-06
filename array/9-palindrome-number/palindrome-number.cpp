class Solution {
public:
    bool isPalindrome(int x) {
        // Handle negative numbers and numbers ending with 0 (except 0 itself)
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int revNo = 0;
        int num = x;
        while(x>0){
            int lastDigit = x % 10;
            // Check for integer overflow or underflow
            if (revNo > INT_MAX / 10 || (revNo == INT_MAX / 10 && lastDigit > INT_MAX % 10)) {
                return false;
            }
            revNo = revNo * 10 +  lastDigit;
            x = x/10;
        }
        return num == revNo;

    }
};