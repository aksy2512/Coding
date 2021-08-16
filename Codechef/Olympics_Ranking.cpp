#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t; cin>>t;
    while(t--){
        ll sum1 =0; ll sum2=0;
        for(int i=0; i<3;i++){
            ll x; cin>>x;
            sum1+=x;
        }
        for(int i=0; i<3;i++){
            ll x; cin>>x;
            sum2+=x;
        }
        if(sum1>sum2){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
}