#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        int cnt4 = 0,oddNumbers =0;
        string newString = "";
        for(auto &i:s){
            if(i=='4') cnt4++;
            else {
                newString +=i;
                if(i!='2') oddNumbers++;
            }
        }
        //perform the split
        int sz = newString.size();
        int ans = oddNumbers,evenNumbers=0;
        for(int i =0;i<sz;i++){
            if(newString[i]=='2') evenNumbers++;
            else oddNumbers--;
            ans = max(ans,evenNumbers+oddNumbers);
        }
        cout << (sz-ans)+cnt4 <<"\n";
    }
}