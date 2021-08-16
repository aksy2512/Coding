#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
     int n; cin>>n;
     unordered_map<ll,ll> mp;
     for(int i=0;i<n;i++){
         ll x; cin>>x;
         mp[x]++;
     }
     ll ans =0;
     for(auto it: mp){
         if(it.second<it.first-1){
             ans=ans+it.second;
         }
         else{
             ans = ans + it.first-1;
         }
     }
     cout<<ans<<endl;
    }
}