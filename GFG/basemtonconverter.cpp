#include<bits/stdc++.h>
using namespace std;
int findCorrespondingValue(char a){
    if(a >='0' && a <='9') return int(a-'0');
    else if(a>='A' && a<='Z') return int(a-'A'+10);
    else return int(a-'a'+36);
}
char findCorrespondingChar(int val){
    if(val >=0 && val <=9) return char(val+48);
    else if(val>=10 && val <=35) return char(val+55);
    else return char(61+val);
}
int main(){
    cout <<"Enter Number of TestCases: \n";
    int tt;
    cin >> tt;
    while(tt--){
        int basem;
        cout <<"Enter base m :\n";
        cin >> basem;
        string s;
        cout << "Enter string in base m :\n";
        cin >> s;
        int basen;
        cout <<"Enter base n :\n";
        cin >> basen;
        //first convert it to base 10
        string wholePartString = "", fractionPartString = "";
        int sz = s.size();
        bool flag = false;
        for(int i = 0 ; i < sz ; i++){
            if(s[i]=='.') {
                flag = true;
                continue;
            }
            if(!flag) wholePartString += s[i];
            else fractionPartString += s[i];
        }
        int sizeOfWholePart = wholePartString.size();
        int sizeOfFractionPart = fractionPartString.size();
        int wholePartInBase10 = 0;
        double fractionPartInBase10=0;
        sz = sizeOfWholePart;
        sz -=1;
        for(int i = 0 ; i < sizeOfWholePart;i++){
            wholePartInBase10 += (pow(basem,sz))*findCorrespondingValue(wholePartString[i]);
            sz--;
        }
        for(int i = 0 ; i < sizeOfFractionPart;i++){
            fractionPartInBase10 += (pow(basem,sz))*findCorrespondingValue(fractionPartString[i]);
            sz--;
        }
        string wholePartInBasen = "";
        while(wholePartInBase10%basen!=0) {
            wholePartInBasen += findCorrespondingChar(wholePartInBase10%basen);
            wholePartInBase10 /= basen;
        }
        reverse(wholePartInBasen.begin(),wholePartInBasen.end());
        string fractionPartInBasen = "";
        double val = fractionPartInBase10;
        for(int i = 0 ; i < 7 ; i++){
            val = val*basen;
            fractionPartInBasen += findCorrespondingChar(int(val));
            val -= int(val);
        }
        cout << "Converted to " << basen << " :";
        cout << wholePartInBasen <<"." << fractionPartInBasen << endl;
    }
}