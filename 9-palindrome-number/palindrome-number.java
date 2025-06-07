class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0) {
            return false;  // negative numbers are not palindromes
        }

        int originalNum = x;
        int revNum = 0;
        while(x > 0){
            int lastDigit = x % 10;
            
            // Overflow check
            if(revNum > (Integer.MAX_VALUE - lastDigit) / 10){
                return false;
            }
            revNum = revNum * 10 + lastDigit;
            x = x / 10;
        }
        return originalNum == revNum;
    }
}