#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
       ll n; cin>>n;
       vector<ll> a;
       vector<ll> b;
       for(int i=0; i<n;i++){
           ll x; cin>>x;
           a.push_back(x);
       }
       for(int i=0; i<n;i++){
           ll x; cin>>x;
           b.push_back(x);
       }
       ll min = INT_MAX;
    
       ll ind = n+1;
       ll count =0;
       for(int i=0;i<n;i++){
           if((a[0]%n + b[i]%n)<min){
             min = a[0]%n + b[i]%n;
             ind = i;
           }
       }
       for(int i=0;i<n;i++){
           if()
       }
       rotate(b.begin())
    }
}