#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        unordered_map<int,int> mp;
        for(int i=0; i<n;i++){
            int x ; cin>>x;
            mp[x]++;
        }
        ll ans =0;
        for(auto it:mp){
            ans = ans + (it.second+1)*(it.second)/2;
        }
        cout<<ans<<endl;
    }
}