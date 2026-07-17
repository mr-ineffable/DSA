#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int>A(n), B(n);
        for(int i = 0 ;i<n;i++) cin >> A[i];
        for(int i =0;i<n;i++) cin >> B[i];
        int sum = 0, ind = -1 , mx = 0,mxVal = 0;
        for(int i =0;i<n;i++){
            int tmx = max(A[i],B[i]);
            sum += tmx;
            if(tmx>=mx){
                mxVal = max(mxVal, min(A[i],B[i]));
            }
        }
        cout << sum + mxVal << endl;
    }
}