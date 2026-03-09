//QUESTION: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/stock-buy-and-sell2615

#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int minprice = prices[0];
        int maxprofit = 0;
        
        for(int i=1; i<prices.size(); i++ ){
            minprice = min(minprice,prices[i]);
            maxprofit = max(maxprofit,prices[i]-minprice);
            
        }
        return maxprofit;
    }
};
