#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        if(n==1){
            cout<<1<<endl;
        }
        else{
            cout<<2*(3*n*n - 6*n + 4)<<endl;
        }
    }
}