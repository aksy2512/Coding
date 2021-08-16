#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll nof(ll n){
    ll count =0;
    for(ll i=2;i<(ll)sqrt(n);i++){
        if(n%i==0){
            count=count+(ll)2;
        }
    }
    if(n%(ll)sqrt(n)==0){
        count=count+(ll)1;
    }
    return count + (ll)1;
}

ll tot(ll n){
    if((n/2)*2==n){
        return nof(n)-(ll)1;
    }
    else{
        return nof(n);
    }
}

ll budp(ll n){
    ll dp[n+2]={0};
    dp[3]=3;
    if(n>3){
      for(ll i=4;i<=n;i++){
          dp[i]=dp[i-1]+nof(i)+tot(i);
      }
    
    }
    return dp[n];
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        ll n;cin>>n;
        cout<<tot(5)<<endl;
        cout<<budp(n)<<endl;
    }
}