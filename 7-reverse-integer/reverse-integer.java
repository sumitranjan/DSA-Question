class Solution {
    public int reverse(int x) {
        int revNum = 0;
      
        while(x != 0){
            int lastDigit = x % 10;
            // Overflow check before multiplying and adding the digit
            if (revNum > Integer.MAX_VALUE / 10) {
                return 0; // overflow for positive numbers
            }
            if (revNum < Integer.MIN_VALUE / 10){
                return 0; // overflow for negative numbers
            }
            revNum = revNum * 10 + lastDigit;
            x = x / 10;
        }
   
        return revNum;
        
    }
}