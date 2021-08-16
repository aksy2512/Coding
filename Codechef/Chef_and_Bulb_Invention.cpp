#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        ll n,p,k;
        cin>>n>>p>>k;
        if(n%k<=p%k){
            cout<<(n%k)*(n/k+1) + (p%k-n%k)*(n/k)+p/k+1<<endl;
        }
        else{
            cout<<(n/k+1)*(p%k)+p/k+1<<endl;
        }
    }
}