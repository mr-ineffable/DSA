#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        long long n, a ,b;
        cin >> n >> a >> b;
        long long  threeIndividually = 3 * a;
        long long minForThree = min(threeIndividually, b);
        cout << (n/3)*minForThree + min((n%3)*a, b) << endl;
        
    }
}