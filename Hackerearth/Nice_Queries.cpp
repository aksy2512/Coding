#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n ; ll q;
    cin>>n>>q;
    int mp [n+1] ={0};
   
    while(q--){
        ll x ; ll i;
        cin>>x>>i;
        
        if(x==1){
            mp[i]=1;
        }
        else{
            bool flag = false;
          for(int j=i;j<=n;j++){
              if(mp[j]==1){
                  cout<<j<<endl;
                  flag = true;
                  break;
              }
          }
          if(flag==false){
              cout<<-1<<endl;
          }
        }
    }
}