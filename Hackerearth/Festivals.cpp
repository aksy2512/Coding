#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
        int n ; cin>>n;
        map<string,priority_queue<ll>> f;
        for(int i=1;i<=n;i++){
            string s; cin>>s;
            ll x; cin>>x;
            f[s].push(x);
        }
        pair<string,ll> fin;
        fin.second=0;
        for(auto it: f){
            ll sum =0;
            int top = min(3,(int)it.second.size());
            while(top--){
                sum += it.second.top();
                it.second.pop();
            }
            if(sum>fin.second){
                fin = {it.first,sum};
            }
        }
        cout<<fin.first<<" "<<fin.second<<endl;
    }
}