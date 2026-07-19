#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n ;
        cin >> n;
        int cntNegOne =0 , cntPosOne=0;
        for(int i =0;i<n;i++){
            int temp;
            cin >> temp;
            if(temp == 1 ) cntPosOne +=1;
            else cntNegOne +=1;
        }
        if(n%2) cout <<"No\n";
        else {
            if(abs(cntPosOne-cntNegOne)%4==0) cout <<"Yes\n";
            else cout <<"No\n";
        }
    }
}