#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        ll n,m ; cin>>n>>m;
        vector<pair<ll,ll>> v;
        for(ll i=(ll)0;i<m;i++){
            ll x,y;cin>>x>>y;
            v.push_back(make_pair(x,y));
        }
        sort(v.begin(),v.end(),greater<pair<ll,ll>>());
        ll sum =v[0].first*n - (n/v[0].second)*v[0].first;
        
        ll rem =n;
        ll lc = v[0].second;
        for(ll i=1;i<m;i++){
            rem = lc%v[i].second;
            if(rem>0){
            sum = sum+(n/lc)*v[i].first;
            }
            
            lc = lc*v[i].second/(__gcd(lc,v[i].second));
            if(rem>0){
                sum=sum-(n/lc)*v[i].first;
            }
            
            
        }
        cout<<sum<<endl;
        
    }
}