#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        int sz = sz.size();
        int firstOccurenceOfOne = -1,firstOccurenceOfZero=-1;
        for(int i=0; i < sz; i++ ){
            if(firstOccurenceOfOne ==-1 && s[i]=='1'){
                firstOccurenceOfOne = i;
            }
            else if(firstOccurenceOfOne != -1 && s[i]=='0'){
                firstOccurenceOfZero = i;
            }
        }
        if(firstOccurenceOfZero == -1) firstOccurenceOfZero = 0;
        string newString = "";
        for(int i=0; i < sz; i++){
            if(i!=firstOccurenceOfZero && i!= firstOccurenceOfOne ) newString += s[i];
        }
        cout << newString << "\n";
    }
}