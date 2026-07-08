#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int cntNeg = 0;
        int cntZero = 0;
        for(int i = 1 ; i <=n;i++){
            int temp;
            cin >> temp;
            if(temp < 0) cntNeg++;
            else if (temp ==0 ) cntZero++;
        }
        if(cntNeg%2==0){
            cout << cntZero << "\n";
        }
        else{
            cout << cntZero + 2 << "\n";
        }
    }
}