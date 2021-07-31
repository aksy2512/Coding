#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q; cin>>n>>q;
    vector<ll> v;
    for(int i=0;i<n;i++){
        ll x ; cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    unordered_map <ll,ll> mp;
    for(int i =0;i<n-1;i++){
        ll r = v[i+1];
        ll c = v[i]+1;
        int j=i+1;
       if(v[j]==c){
           while (v[j]==c)
           {
               j=j+1;
               c=c+1;
           }
           
           pair<ll,ll> x;
           x = make_pair(v[i],c);
           mp.insert(x);
       }
       else{
           pair<ll,ll> x;
           x = make_pair(v[i],v[i]+1);
           mp.insert(x);
       }

    }
    pair<ll,ll> x;
           x = make_pair(v[n-1],v[n-1]+1);
           mp.insert(x);
    // while (q--)
    // {
    //     ll x; cin>>x;
    //     if(mp.find(x)==mp.end()){
    //         auto it = find(v.begin(), v.end(), x+1);
    //         if (it != v.end())
    // {
     
    //     // calculating the index
    //     // of K
    //     cout<<mp[v[it-v.begin()]]<<endl;
    // }
    // else{
    //     cout<<x+1<<endl;
    // }


    //     }
    //     else{
    //         cout<<mp[x]<<endl;
    //     }
        
    // }
    while(q--){
 ll x;
 cin>>x;
 if(mp[x]==0){
 if(mp[x+1]==0) cout<<x+1<<"\n";
 else cout<<mp[x+1]<<"\n";
 } else cout<<mp[x]<<"\n";
 }
    
}