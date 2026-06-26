#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

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
long long findFactorial(int n){
    if(n<0) return -1;
    long long factorial = 1;
    for(int i=1;i<=n;i++){
        factorial *= i;
    }
    return factorial;
}
cpp_int biggerFactorial(long long n){
    if (n < 0) return -1;
    cpp_int factorial = 1;
    for(int i=1; i<=n;i++){
        factorial *=i;
    }
    return factorial;
}

int countTrailingZeroes(long long n){
    long long var = 5;
    int trailingZeroes = 0;
    while(n/var >0){
        trailingZeroes += n/var;
        var *=5;
    }
    return trailingZeroes;
}
long long gcd(long long a, long long b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}
long long lcm(long long a, long long b){
    long long g = gcd(a,b);
    return (a*b)/g;
}
bool checkPrime(long long n){
    if(n<=1) return false;
    if(n<=3) return true;
    if((n%2==0)||(n%3)==0) return false;
    for(long long i = 5;i<=sqrtl(n); i+=6){
        if(n%i==0||(n%(i+2)==0)) return false;
    }
    return true;
}
int main(){
    int number = 98789;
    int digits = countDigits(number);
    cout <<"No of digits in "<< number << " are : " << digits << endl;
    
    if(checkPalindrome(number)){
        cout <<"This is palindrome\n";
    }
    else{
        cout <<"This is not a palindrome\n";
    }
    number = 20;
    cout << "Factorial of number " << number << " is :" << findFactorial(number) << endl;

    // number = 7689;
    // cout <<"Factorial of a bigger number " << number << " is :" << biggerFactorial(number) << endl;
    cout <<"Trailing Zeroes for the factorial of "<<number<< " are :" << countTrailingZeroes(number)<< endl;
    cout <<"Trailing Zeroes for the factorial of "<<251<< " are :" << countTrailingZeroes(251)<< endl;
    cout <<"GCD of "<< 12 << " and " << 15 <<" is " << gcd(12,15) << endl;

    cout <<"LCM of " << 4 << " and " << 6 << " is " << lcm(4,6) << endl;
    bool flag = checkPrime(2121657);
    cout <<" Is " << 2121657 << " a Prime Number? " << flag << endl;
}