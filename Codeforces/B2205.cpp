#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n==1) return false;
    if(n==2||n==3) return true;
    if(n%2==0 || n%3==0) return false;
    int sqrtofn = sqrt(n);
    for(int i =5; i <= sqrtofn; i+=6){
        if(n%i==0 || n%(i+2)==0) return false;
    }
    return true;
}
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        long long n;
        cin >> n;
        vector<long long> divisorsOfN;
        long long sqrtOfN = sqrtl(n);
        for (long long i = 2; i <= sqrtOfN; i++) {
            if (n % i == 0) {
                if(isPrime(i)) divisorsOfN.push_back(i);
        
                long long second = n / i;
                // cout << second <<" " << isPrime(second) << endl;
                if (second != i && isPrime(second))
                    divisorsOfN.push_back(second);
            }
        }
        long long ans = 1;
        int sz = divisorsOfN.size();
        for(int i=0;i<sz; i++){
            // cout << divisorsOfN[i] << endl;
            ans *= divisorsOfN[i];
        }
        cout << ans << "\n";
        
    }
}