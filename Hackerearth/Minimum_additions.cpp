#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        ll sum =0;
        for(int i=0;i<n;i++){
            ll x; cin>>x;
            sum+=x;
        }
        ll avg=sum/n;
        cout<<sum<<endl;
        cout<<avg<<endl;
        int c=0;
        while(avg>k){
           sum = sum +1;
           c=c+1;
           avg= sum/(n+c);
        }
        cout<<c<<endl;
    }
}