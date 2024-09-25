class Solution {
    public int reverse(int x) {
        int revNum = 0;
        int num = x;
        if(x<0)
            x = x * -1;
        while(x > 0){
            int lastDigit = x % 10;
            if(revNum > Integer.MAX_VALUE/10){
                return 0;
            }
            revNum = revNum * 10 + lastDigit;
            x = x / 10;
        }
        if(num < 0)
            revNum = revNum * -1;
        return revNum;
        
    }
}