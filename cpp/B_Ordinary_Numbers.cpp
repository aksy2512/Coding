#include<bits/stdc++.h>
using namespace std;

int count(long long n){
    int c = 0;
    while(n!=0){
        n=n/10;
        c++;
    }
    return c;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--){
      long long n; cin>>n;
      int s = count(n);
      int ans = (n-1)*9;
      
      
      
    }


}