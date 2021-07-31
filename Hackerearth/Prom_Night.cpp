#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while (t--)
    {
        ll m,n; cin>>m>>n;
        vector <ll> b;
        vector <ll> g;
        for(int i=0;i<m;i++){
            ll x ; cin>>x;
            b.push_back(x);
        }
        for(int i=0;i<n;i++){
            ll x ; cin>>x;
            g.push_back(x);
        }
        sort(b.begin(),b.end());
        sort(g.begin(),g.end());
        bool flag = true;
        for(int i=0;i<m;i++){
         if(g[i]>=b[i]){
             flag = false;
             cout<<"NO"<<endl;
             break;
         }
        }
        if(flag==true){
            cout<<"YES"<<endl;
        }
    }
    
}