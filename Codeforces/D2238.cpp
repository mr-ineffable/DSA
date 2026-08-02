#include<bits/stdc++.h>
using namespace std;
int gcdOfAAndB(int A, int B){
    if(B==0) return A;
    return gcdOfAAndB(B, A%B);
}
bool isPrime(int n){
    if(n ==1) return false;
    else if(n==2||n==3) return true;
    else if(n%2==0||n%3==0) return false;
    for(int i = 5 ; i <= sqrt(n); i+=6){
        if(n%i ==0 || n%(i+2)==0) return false;
    }
    return true;
    
}
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int squareRoot = sqrt(n);
        vector<int>divisorsOfN;
        for(int i = 2 ; i <= squareRoot; i++){
            if(n%i == 0){
                divisorsOfN.push_back(i);
                int secondNumber = n/i;
                if(secondNumber != i){
                    divisorsOfN.push_back(secondNumber);
                }
            }
        }
        sort(divisorsOfN.begin(),divisorsOfN.end());
        divisorsOfN.push_back(n);
        int layer  = 0;
        int sz = divisorsOfN.size()-1;
        int l = 0;
        int lastNumber = 0; 
        while(l <= sz){
            if(isPrime(divisorsOfN[l])|| l==sz){
                layer++;
                l++;
            }
            else{
                if(gcdOfAAndB(lastNumber,divisorsOfN[l])!=1){
                    layer++;
                    lastNumber= divisorsOfN[l];
                }
                else{
                    lastNumber = 0;
                }
                l++;
            }
        }
        // for(int i = 0 ; i < sz ;i++){
        //     cout << divisorsOfN[i] <<" " ;
        // }cout << endl;
        
        cout << layer << endl;
        
    }
}