#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(vector<int>&stoneValue,vector<int>&dp,int sz){
        dp[sz] = 0;
        for(int i = sz-1; i >= 0 ; i--){
            int tempSum = 0 ;
            for(int j = 0; j <=2 && i+j < sz; j++){
                tempSum += stoneValue[i+j];
                dp[i] = max(dp[i],tempSum-dp[i+j+1]); 
            }
        }
    }
    string stoneGameIII(vector<int>& stoneValue) {
        int sz = stoneValue.size();
        vector<int>dp(sz+1,INT_MIN);
        solve(stoneValue,dp,sz);
        if(dp[0]==0) return "Tie";
        else if(dp[0]>=0) return "Alice";
        else return "Bob";


    }
};