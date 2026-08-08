#include<bits/stdc++.h>
using namespace std;
int firstOccurenceOfZero(string &s){
    int sz = s.size();
    for(int i = 0 ; i < sz; i++ ){
        if(s[i]=='0') return i;
    }
    return -1;
}
int firstOccurenceOfOne(string &s){
    int sz = s.size();
    for(int i = 0; i < sz; i++){
        if(s[i]=='1') return i;
    }
    return -1;
}
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        int sz = s.size();
        int o = firstOccurenceOfOne(s);
        int z = firstOccurenceOfZero(s);
        string newString = "";
        for(int i = 0 ; i < sz; i++){
            if(i== o || i== z) {}
            else newString += s[i];
        }
        cout << newString << "\n";
        
    }
}