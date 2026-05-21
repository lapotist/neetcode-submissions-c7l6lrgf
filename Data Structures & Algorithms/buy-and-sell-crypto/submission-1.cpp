class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp = 0, res = 0;
        int minp = prices[0];
        for(int price : prices) {
            if (price < minp) {
                res = max(res, maxp-minp);
                maxp = price;
                minp = price;
            } else {
                maxp = max(maxp, price);
            }
        }
        res = max(res, maxp-minp);
        return res;
    }
};
