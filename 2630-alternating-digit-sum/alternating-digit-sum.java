class Solution {
    public int alternateDigitSum(int n) {
        int rev = 0;
        while(n!=0){
            int rem = n%10;
            n=n/10;
            rev = rev * 10 + rem;
        }
       
        n = rev;
        int sum = 0;
        int index = 0;
        while(n!=0){
            int rem = n%10;
            n = n/10;
            if(index % 2 == 0)
                sum += rem;
            else
                sum += -1 * rem;
            index++;
        }
        return sum;
    }
}