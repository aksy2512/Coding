#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    int ans=0;
    while(t--){
        long long w , h;
       cin>>w>>h;
    if((10*w>=16*h & 10*w<=17*h)|(10*h>=16*w & 10*h<=17*w)){

           ans++;
    }

    }
    cout<<ans;
}