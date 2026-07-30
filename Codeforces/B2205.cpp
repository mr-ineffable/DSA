#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n){
    if(n<=1) return false;
    else if(n==2||n==3) return true;
    else if(n%2==0||n%3==0) return false;
    for(long i=5; i <=sqrtl(n); i+=6){
        if(n%i==0|| n%(i+2)==0) return false;
    }
    return true;
}
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        long long n;
        cin >> n;
        if(isPrime(n)) cout << n << endl;
        else{
            vector<int>UniquePrimeDivisorsOfN;
            for(int i = 2; i <= sqrtl(n);i++){
                //divisors they always lie in pair
                //if first divisor is i then find second divisor
                int secondDivisor = n / i;
                if(n%i==0 && isPrime(i)) UniquePrimeDivisorsOfN.push_back(i);
                if(n%secondDivisor==0 && isPrime(secondDivisor) && i != secondDivisor) UniquePrimeDivisorsOfN.push_back(secondDivisor);
            }
            long long ans = 1;
            int sz = UniquePrimeDivisorsOfN.size();
            for(int i =0;i<sz ; i++){
                ans *= UniquePrimeDivisorsOfN[i];
            }
            cout << ans <<"\n";
        }
    }
}