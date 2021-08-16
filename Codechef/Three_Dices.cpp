#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
      int x,y;cin>>x>>y;
      double c = 6-(x+y);
      double z = max(0.0,c);
      double ans = z/6;
      cout<<ans<<endl;

    }
}