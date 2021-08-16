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
        vector<ll> v;
        for(int i=0;i<n;i++){
            ll x; cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        ll lar = v[n-1];
        ll ans=0;
        for(int i=0;i<n;i++){
        ans=ans|(v[i]^lar);
        }
        cout<<lar<<" "<<ans<<endl;
    }
}