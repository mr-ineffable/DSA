#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<long long>v(n);
        for(int i =0 ; i<n;i++) cin >> v[i];
        vector<long long>ans;
        ans.push_back(v[0]);
        long long sum = v[0];
        for(int i = 1; i <n;i++){
            sum += v[i];
            long long avg = sum / (i+1);
            if(ans[ans.size()-1] > avg) ans.push_back(avg);
            else ans.push_back(ans[ans.size()-1]);
        }
        for(int i =0;i <ans.size();i++){
            cout << ans[i] <<" " ;
        }cout << endl;
    }
}