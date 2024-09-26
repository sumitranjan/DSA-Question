class Solution {
    public boolean isPalindrome(int x) {
        if(x < 0)
            return false;
            
        int revNum = 0;
        int temp = x;
        while(x != 0){
            int lastDigit = x % 10;
            revNum = revNum * 10 + lastDigit;
            x = x / 10;
        }

        return (revNum == temp);
    }
}