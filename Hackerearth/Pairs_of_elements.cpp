#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n ; cin>>n;
    ll arr[n]; unordered_map<ll,ll> mpi;
    unordered_map<ll,ll> mpj;
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        arr[i]=x;
        if(i>0 & i <n-1){
            mpi[x+(i+i)*(i+1)]++;
            mpj[x-(i+1)*(i+1)]++;
        }
        else if(i==0){
            mpi[x+(i+i)*(i+1)]++;
        
        }
        else if(i==n-1){
            mpj[x-(i+1)*(i+1)]++;
        }
    }
    ll p=0;
    for(auto it: mpi){
          
          p = p + (mpj[it.first]*it.second);
        
    }
  cout<<p<<endl;
}
