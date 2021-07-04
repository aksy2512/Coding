#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long r,b,d;
        cin>>r>>b>>d;

        long double ma = max(r,b);
        long double mi = min(r,b);
        long double di = ma/mi;
        if((ma/mi)-1<=d){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}