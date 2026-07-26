#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        int sz = s.size();
        string newString = "";
        int cnt4=0, oddDigit=0;
        for(int i =0;i <sz;i++){
            if(s[i]=='4'){
                cnt4++;
            }
            else{
                if(s[i]!='2') oddDigit++;
                newString += s[i];
            }
        }
        int evenDigit =0;
        sz = newString.size();
        int ans = oddDigit;
        for(int i = 0; i < sz ;i++){
            if(newString[i]=='2') evenDigit++;
            else oddDigit--;
            ans = max(ans,evenDigit+oddDigit);
        }
        cout << (((sz-ans)>=0)? (sz-ans):0)+cnt4 << endl;
    }
}