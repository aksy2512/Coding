#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;cin>>n>>k;

    vector<ll> v;
    ll x; cin>>x;v.push_back(x);
    ll max = v[0];
     if(n==1){
        if(k%2==1){
            max = -1;
            
        }
        
    }
    else{
    for(ll i=1;i<n;i++){
        ll c;cin>>c;
        v.push_back(c);
        if(i<k-1 && c>max){
            max = v[i];
        }
        
    }
    if(k<n){
       if(v[k]>max){
           max = v[k];
       } 
    }
    
    }
    cout<<max;
}