#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll M,Q,N;cin>>M>>Q>>N;
    vector<ll> v;
    for(ll i=0; i<N;i++){
        ll x; cin>>x;
        v.push_back(x);
    }
    unordered_map<ll,ll> mp;
    for(ll i=0;i<N;i++){
        for(ll j=-Q;j<=Q;j++){
            ll c = v[i] + j*M;
            mp[c]++;
        }
    }
    vector<ll> f;

    for(auto it:mp){
        f.push_back(it.second);
    }
    sort(f.begin(),f.end(),greater<ll>());
       cout<<f[0];


    
}