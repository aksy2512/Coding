#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int func(ll a, ll b, ll c , ll d, ll m,ll x){
 return (a%m*x%m*x%m*x%m + b%m*x%m*x%m + c%m*x%m + d%m)%m;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        ll a,b,c,d,m;
        cin>>a>>b>>c>>d>>m;
        ll n; cin>>n;
        unordered_map <ll,ll> s;
        unordered_map <ll,ll> f;
        for(ll i =0; i<n;i++){
           ll x; cin>>x;
           ll g = (x%m*x%m)%m;
           ll h = func(a,b,c,d,m,x);
           if(g<0){
               g=g+m;
           }
           if(h<0){
               h=h+m;
           }

           
           f[h]++;
           s[g]++;
        }
        ll ans =0;
        for(auto it : s){
           ans = ans + f[it.first]%1000000007*it.second%1000000007;
        }
        cout<<ans%1000000007<<endl;
    }
}