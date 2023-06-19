#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    
    int max_profit=INT_MIN;
    int buy=prices[0];
    int profit=0;
    for(int i=0;i<prices.size();i++){
        profit=(prices[i]-buy);
        max_profit=max(max_profit,profit);
        buy=min(buy,prices[i]);
    }
    return max_profit;
}
