#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0; i  <n ; i++){
            cin >> v[i];
        }
        int start = 1;
        bool flag = true;
        int save = 0;
        for(int i = 0; i < n ; i++){
            if(v[i]+save>=start){
                save = v[i]+save-start;
                start++;
            }
            else {
                flag = false;
                break;
            }
        }
        if(flag) cout << "Yes\n";
        else cout << "No\n";
    }
}