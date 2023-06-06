#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit=0,profit=0,minPrice=prices[0];
        for(int i=0;i<n;i++){
            minPrice = min(minPrice,prices[i]);
            profit = prices[i]-minPrice;
            maxProfit = max(profit,maxProfit);
        }
        return maxProfit;
    }
};