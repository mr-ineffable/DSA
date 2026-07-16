#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int x, y;
        cin >> x >> y;
        cout << (((x%2)+(y%2)<=1)? "Yes\n":"No\n");
    }
}