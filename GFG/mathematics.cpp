#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
    int cnt = 0;
    while(n>0){
        cnt++;
        n /= 10;
    }
    return cnt;
}
bool checkPalindrome(int n){
    int revNumber = 0;
    while(n>0){
        revNumber += (n%10);
        if(n == revNumber){
            return true;
        }
        n /=10;
        revNumber *=10;
    }
    return false;
}
int main(){
    int digits = countDigits(54321);
    cout << digits << endl;
    int number = 98789;
    if(checkPalindrome(number)){
        cout <<"This is palindrome";
    }
    else{
        cout <<"This is not a palindrome";
    }
}