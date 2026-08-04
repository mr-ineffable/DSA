#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n==1) return false;
    if(n==2||n==3) return true;
    if(n%2==0||n%3==0) return false;
    for(int i = 5; i <=sqrt(n);i+=6){
        if(n%i==0||n%(i+2)==0) return false;
    }
    return true;
}
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        unordered_map<int,int>mp;
        if(isPrime(n)) mp[n] = 1;
        int squareRoot = sqrt(n);
        for(int i = 2; i <=squareRoot; i++){
            while(isPrime(i) && n%i==0){
                mp[i]++;
                n /= i;
            }
            
        }
        if(n!=1) mp[n] = 1;
        int A = 0,m=0;
        for(auto & i :mp){
            m++;
            A+=i.second;
            // cout << i.first <<" " << i.second << endl;
        }
        cout << A+m-1 << endl;
        
    }
}