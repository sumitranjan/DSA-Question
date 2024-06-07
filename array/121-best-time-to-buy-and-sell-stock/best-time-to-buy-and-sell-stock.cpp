class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int mini = INT_MAX;
        for(int i=1; i<prices.size(); i++){
            mini = min(mini, prices[i-1]);
            int diff = prices[i] - mini;
            maxi = max(maxi, diff);
        }
        return maxi;
    }
};