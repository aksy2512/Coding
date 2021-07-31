#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll nc2(int n)

{

return 1LL * n * (n - 1) / 2;

}

ll nc3(int n){

return 1LL * n * (n - 1) * (n - 2) / 6;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m; cin>>n>>m;
    int mp [m] ={0};
    
    
    for(int i=0;i<n;i++){
        ll x; cin>>x;
        mp[x%m]++;
    }
    ll ans =0;
    for(int i=0;i<m;i++){
        if (mp[i]>0){
           for(int j=i;j<m;j++){
               if(mp[j]>0){
                   ll c = (i+j)%m;
                   int k = (2*m - c)%m;
                   if(i<=j&&j<=k){
                   if(i==j&&j==k){
                       ans = ans + nc3(mp[i]);
                   }
                   else if(j==k){
                       ans = ans + nc2(mp[j])*mp[i];
                   }
                   else if(i==j){
                       ans = ans + nc2(mp[i])*mp[k];
                   }
                   else{
                       ans += 1LL*mp[i]*mp[j]*mp[k];
                   }
               }
           }
           }
        }
    }
    cout<<ans<<endl;
}

