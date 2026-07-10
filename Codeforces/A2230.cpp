#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        long n, a ,b;
        cin >> n >> a >> b;
        long long ans1 = (n / 3) * min(b, 3 * a) + (n % 3) * a;
        long long ans2 = ((n + 2) / 3) * min(b, 3 * a);
        cout << min(ans1, ans2) << '\n';
        
    }
}