#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<long long>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        for(int i =1;i<n-1;i++){
            if(v[i]>v[i-1]){
                swap(v[i],v[i+1]);
                v[i+1] += v[i];
            }
        }
        cout << v[v.size()-1] << endl;
    }
}