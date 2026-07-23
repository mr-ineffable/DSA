#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int cnt = n;
        for(int i = 1; i <= n ; i++){
            cout << i << " ";
            cout << cnt+1 << " " << cnt+2 << " ";
            cnt+=2;;
            
        }cout << endl;
    }
}