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
vector<long long> checkPrimeFactors(long long n){
    if(n<=1) return {};
    vector<long long>ans;
    while(n%2==0){
        ans.push_back(2);
        n /=2;
    }
    while(n%3==0){
        ans.push_back(3);
        n /=3;
    }
    for(long long i =5; i<=sqrtl(n);i +=6){
        while(n%i==0){
            ans.push_back(i);
            n /= i;
        }
        while(n%(i+2)==0){
            ans.push_back(i+2);
            n /= (i+2);
        }
    }
    if (n>1){
        ans.push_back(n);
    }
    return ans;
}
vector<long long> allDivisor(long long n){
    long long i=1;
    vector<long long>allDiv;
    for(;i*i<=n;i++){
        if((n%i)==0){
            allDiv.push_back(i);
        }
    }
    i--;
    for(;i>=1;i--){
        if((n%i)==0 and (n/i)!= i){
            allDiv.push_back(n/i);
        }
    }
    return allDiv;
}
vector<long long>sieveofEratosthenes(long long n){
    vector<long long>isPrime(n+1,true);
    for(long long i = 2; i<=sqrtl(n);i++){
        if(isPrime[i]){
            for(long long j = i*i;j<=n;j+=i){
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}
long long computerPowerRecursive(int x, int n){
    if(n==0) return 1;
    long long temp = computerPowerRecursive(x,n/2);
    temp *= temp;
    if(n%2==0) return temp;
    else return temp*x;
}
long long computeIterativePower(int x, int n){
    long long temp = x;
    long long res = 1;
    while(n>0){
        if(n&1) res *= temp;
        temp *= temp;
        n /=2;
    }
    return res;
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

    cout <<"Prime facotors of " << 23456 << " are :" << endl;
    vector<long long> ans = checkPrimeFactors(23456);
    for(int i =0;i< ans.size();i++){
        cout << ans[i] << " ";
    }cout << endl;
    vector<long long>divFound = allDivisor(90);
    for(int i=0;i<divFound.size();i++){
        cout << divFound[i] <<" ";
    }cout << endl;
    cout << "Prime numbers less than or equal to " << 83 << " are: ";
    vector<long long>isPrime = sieveofEratosthenes(87);
    for(int i=2;i<isPrime.size();i++){
        if(isPrime[i]) cout << i <<" ";
    }cout <<endl;
    cout << 4 << " Raised to the power " << 5 << ": " << computerPowerRecursive(4,5) <<" " <<  computeIterativePower(4,5) << endl;
}