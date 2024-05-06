class Solution {
public:
    bool isPalindrome(int x) {
        // Handle negative numbers and numbers ending with 0 (except 0 itself)
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int b = 0;
        while(x>b){
            int lastDigit = x % 10;
            b = b * 10 +  lastDigit;
            x = x/10;
        }
        return (x == b) || (x == b/10);

    }
};
