#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int cnt2 =0, cnt3 =0;
        for(int i =0; i <n;i++){
            long temp;
            cin >> temp;
            if(temp==2) cnt2++;
            else if(temp >=3) cnt3++;
        }
        // cout << cnt2 <<" " << cnt3 << endl;
        if(cnt2 >=2 || cnt3 >=1) cout <<"YES\n";
        else cout <<"NO\n";
    }
}