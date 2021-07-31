#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll> v;
        vector<ll> o;
        for(int i=0;i<n;i++){
            ll x;cin>>x;
           v.push_back(x);
           o.push_back(x);
        }
        sort(v.begin(),v.end());
        if(o[0]==v[n-1] && n!=2){
           ll ma =0;
           
            for(int i=1;i<n;i++){
                swap(o[0],o[i]);
               ma = max(o[i]-o[i-1],ma);
               swap(o[0],o[i]);

               
            }
            cout<<max(v[n-2]-v[0],ma)<<endl;
        }
        else{
        cout<<v[n-1]-v[0]<<endl;
        }
    }
}