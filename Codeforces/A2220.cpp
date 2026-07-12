#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&arr){
    for(int i = 1;i<arr.size();i++){
        if(arr[i]==arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int>());
        if(check(arr)){
            for(int i = 0; i<arr.size();i++){
                cout << arr[i] << " ";
            }cout << endl;
        }
        else cout << -1 << endl;
        
    }
}