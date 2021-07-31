#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        ll A , B,N;
        cin>>A>>B>>N;
        vector<ll> v;
        for(int i=0;i<N;i++){
            ll x; cin>>x;
            v.push_back(x);
        }
        ll countr =0;ll counts =0;
        sort(v.begin(),v.end());
        for(int i=0;i<N;i++){
            A=A-v[i];
            
            if(A<0){
                break;
            }
            countr++;
        } 
         for(int i=0;i<N;i++){
            B=B-v[i];
            
            if(B<0){
                break;
            }
            counts++;
        }
        if(countr>counts){
            cout<<"Raghu Won"<<endl;
        } 
        else if(counts>countr){
            cout<<"Sayan Won"<<endl;
        }
        else{
            cout<<"Tie"<<endl;
        }
    }
}