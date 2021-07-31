#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int n; cin>>n;
    vector<ll> f ;
    for(int i=0;i<n;i++){
        ll x ; cin>>x;
        f.push_back(x);
    }
    int m; cin>>m;
    vector<ll> s;
    for(int i=0;i<m;i++){
        ll x; cin>>x;
        s.push_back(x);
    }
    sort(s.begin(),s.end());
    ll mo =0;
    for(int i=0;i<n;i++){
        ll x = s[m-1]+1;
        if(f[i]<=s[m-1]){
           mo = mo+x-f[i];
        }
        
    }
    cout<<mo;
}