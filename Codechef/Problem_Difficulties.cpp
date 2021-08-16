#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        ll c =0;
        unordered_map<int,int> mp;
        for(int i=0;i<4;i++){
            ll x; cin>>x;
            c=x;
            mp[x]++;
        }
        int ans =0;
        if(mp.size()==4 || mp.size()==3){
           cout<<2<<endl;
        }
        if(mp.size()==2){
          if(mp[c]==1 || mp[c]==3){
              cout<<1<<endl;
          }
          if(mp[c]==2){
              cout<<2<<endl;
          }
        }
        if(mp.size()==1){
            cout<<0<<endl;
        }

    }
}