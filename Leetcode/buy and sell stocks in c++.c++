// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii?envType=study-plan-v2&envId=top-interview-150

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int p=0;
            for(int i=0;i<prices.size()-1;i++)
                if(prices[i+1]>prices[i]) p+=prices[i+1]-prices[i];
            return p;
        }
    };