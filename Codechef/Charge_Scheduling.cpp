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
       vector<pair<ll,ll>> v;
       for(int i=0;i<n;i++){
           ll x;cin>>x;
           v.push_back({x,i});
       }
       vector<ll> t;
        for(int i=0;i<n;i++){
           ll x;cin>>x;
           t.push_back(x);
       }
       sort(v.begin(),v.end());
       vector<pair<pair<ll,ll>,ll>> ans;
       ll sum=v[0].first; ll st=0; ll e=v[0].first;
       int count=0;
       for(int i=0;i<n && sum<=t[i] ;i++){
             count++;
             
             ans.push_back({{v[i].second+1,st},e});
             
             st=e;
             if(i<n-1){
             e=v[i+1].first+sum;
             }
             else{
                 e=t[i];
             }
             
             sum = sum+v[i+1].first;
       }
       cout<<count<<endl;
       for(int i=0;i<count;i++){
       cout<<ans[i].first.first<<" "<<ans[i].first.second<<" "<<ans[i].second<<endl;
       }
    }
}