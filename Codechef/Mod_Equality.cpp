#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll> v;
        for(int i=0;i<n;i++){
            ll x;cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        ll s = v[0];
        ll count =0;
        bool flag= false;
        for(int i=1;i<n;i++){
            if(v[i]==s){
                count=count;
            }
            else{
                if(v[i]%(v[i]-s)==s){
                    count++;
                }
                else{
                    cout<<n<<endl;
                    flag=true;
                    break;
                }
            }
        }
        if(flag==false){
            cout<<count<<endl;
        }
    }
}