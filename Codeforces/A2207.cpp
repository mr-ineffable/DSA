#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int l;
        cin >> l;
        string s;
        cin >> s;
        for(int i = 1; i < l-1; i++){
            if(s[i-1]=='1' && s[i]=='0' && s[i+1]=='1'){
                s[i] = '1';
            }
        }
        int maxOne = 0;
        for(int i =0 ; i < l ; i++){
            if(s[i]=='1') maxOne++;
        }
        for(int i = 1; i < l-1; i++){
            if(s[i-1]=='1' && s[i]=='1' && s[i+1]=='1'){
                s[i] = '0';
            }
        }
        int minOne =0;
        for(int i = 0; i < l ; i++){
            if(s[i]=='1') minOne++;
        }
        cout << minOne << " " << maxOne << "\n";
    }
}