#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll>v;
      
        for(int i=0;i<n;i++){
            ll x;cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        ll c=0;
        ll numi=0;
        ll g=v[0];
        for(int i=1;i<n;i++){
            ll prev =g;
            g=__gcd(g,v[i]);
            if(g==1){
              c=c+1;
              numi=i;
              g=prev;
            }
            
        }
        if(c==0){
        v[n-1]=g;
        ll ans=0;
        for(int i=0;i<n;i++ ){
            ans =ans+v[i]/g;        
            }
            cout<<ans<<endl;
        }
        else if(c==1){
         v[numi]=g;
         ll ans=0;
         for(int i=0;i<n;i++ ){
            ans =ans+v[i]/g;        
            }
            cout<<ans<<endl;
        }
        else{
          v[n-1]=1;
          ll ans=0;
         for(int i=0;i<n;i++ ){
            ans =ans+v[i];        
            }
           if(ans<1e6){ cout<<ans<<endl;
           }
           else{
               cout<<1e6<<endl;
           }
        }
    }
}