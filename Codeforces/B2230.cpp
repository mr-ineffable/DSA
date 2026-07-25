#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        int cnt1=0, cnt2=0,cnt3=0,cnt4=0,ans = INT_MAX;
        for(int i =0;i<s.size();i++){
            if(s[i]=='4') cnt4++;
            else if(s[i]=='1') cnt1++;
            else if(s[i]=='3') cnt3++;
            else if(s[i]=='2'){
                cnt2++;
                ans = min(cnt1+cnt3, cnt2);
            }
        }
        cout << ((ans==INT_MAX)? 0:ans) + cnt4 <<"\n";
    }
}