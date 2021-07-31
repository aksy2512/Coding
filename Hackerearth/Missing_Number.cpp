#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t; cin>>t;
    while(t--){
        int n ; cin>>n;
        vector<ll> v;
        for(int i=0;i<n;i++){
            ll x; cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int g = 2;
        int j =2;
        for(int i=0;i<n;i++){
            if(v[i]>=g){
                g=2*j;
                j++;
            }
        }
        cout<<g<<endl;
    }
}