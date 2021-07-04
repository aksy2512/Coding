#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;cin>>t;
    while(t--){
        int N,K;cin>>N>>K;
        vector<ll> v;
        for(int i=0;i<N;i++){
            ll x;cin>>x;
            v.push_back(x);
        }
        int arr [33] ={0};
       

            for(int i=0;i<N;i++){
                 int j=32;
                while(v[i]!=0){
                  arr[j]= arr[j]+v[i]%2;
                  v[i]=v[i]/2;
                  j--;
                }
            }
            ll ans=0;
            for(int i=32;i>=0;i--){
                if(arr[i]%K==0){
                    ans=ans+arr[i]/K;
                }
                else{
                    ans = ans + arr[i]/K+1;
                }
            }
            cout<<ans<<endl;
        
    }
}