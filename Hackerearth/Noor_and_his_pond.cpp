#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t; cin>>t;
    while(t--){
        int n ; cin >> n;
        vector<pair<ll,char>> v;
        for(int i =0;i<n;i++){
            ll x; cin>>x;
            v.push_back({x,'e'});
            ll e;cin>>e;
            v.push_back({e,'s'});
        }
        sort(v.begin(),v.end());
        ll ans =0;ll count =0;
        for(int i=0;i<v.size();i++){
            if(v[i].second =='s'){
                count ++;
            }
            
            if(v[i].second =='e'){
                count--;
            }
            ans = max(ans,count);
        }
        cout<<ans<<endl;
        
        
    }
}