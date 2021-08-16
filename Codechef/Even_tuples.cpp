#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n,q;cin>>n>>q;
        vector<ll> v;
        vector<ll> ec;
        vector<ll> oc;
        ll c ; cin>>c;
        v.push_back(c);
        if(c%2==1){
            oc.push_back(1);
            ec.push_back(0);
        }
        else{
            ec.push_back(1);
            oc.push_back(0);
        }
        for(int i=1;i<n;i++){
            ll x; cin>>x;
            v.push_back(x);
            if(x%2==1){
                oc.push_back(oc[i-1]+1);
                ec.push_back(ec[i-1]);
            }
            else{
                ec.push_back(ec[i-1]+1);
                oc.push_back(oc[i-1]);
            }
        }
        while(q--){
            int l,r;cin>>l>>r;
            l=l-1;r=r-1;
            ll o =0;ll e=0;
            if(v[l]%2==1){
                  o = oc[r]-oc[l]+1;
            }
            else{
                 o = oc[r]-oc[l];
            }
            if(v[l]%2==0){
                 e = ec[r]-ec[l]+1;
            }
            else{
                e = ec[r]-ec[l];
            }
            ll ans = (e*(e-1)*(e-2))/6 + (e*o*(o-1))/2 ;
            cout<<ans<<endl;
        }
    }
}