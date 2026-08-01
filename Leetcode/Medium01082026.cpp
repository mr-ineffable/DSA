#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char flipTheChar(char a){
        if(a=='+') return '-';
        else return '+';
    }
    int maximiseValue(int start,int end,char whatToDo,vector<int>&nums){
        if (start == end) {
            return (whatToDo == '+') ? nums[start] : -nums[start];
        }
        int maxDifferenceAddStart = ((whatToDo=='+')? nums[start]: -1*nums[start]);
        int maxDifferenceAddEnd = ((whatToDo=='+')? nums[end]: -1*nums[end]);
        char next = flipTheChar(whatToDo);
        int vist = maximiseValue(start+1,end,next,nums);
        int viet = maximiseValue(start,end-1,next,nums);
        int maxValue =  max(maxDifferenceAddStart+vist,maxDifferenceAddEnd+viet);
        int minValue =  min(maxDifferenceAddStart+vist,maxDifferenceAddEnd+viet);
        return ((whatToDo == '+')? maxValue :minValue);

    }
    bool predictTheWinner(vector<int>& nums) {
        int l = 0;
        int sz = nums.size();
        char whatToDo = '+';
        return (maximiseValue(0,sz-1,whatToDo,nums)>=0)? true:false;

    }
};