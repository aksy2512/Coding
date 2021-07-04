#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
      long long k;cin>>k;
      long long ans = log2(k);
      cout<<pow(2,ans)-1<<endl;
    }
}