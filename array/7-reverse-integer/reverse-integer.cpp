class Solution {
public:
    int reverse(int x) {
        int revNo = 0;
        while(x!=0){
            int lastDigit = x%10;
            // Check for overflow before updating revNo
            if (revNo > INT_MAX / 10 || (revNo == INT_MAX / 10 && lastDigit > 7)) return 0; // Positive overflow
            if (revNo < INT_MIN / 10 || (revNo == INT_MIN / 10 && lastDigit < -8)) return 0; // Negative overflow
            
            revNo = revNo * 10 +  lastDigit;
            x = x/10;
        } 
        

        return revNo;
    }
};