#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        int workx = x*7;
        int work2 = y*d+z*(7-d);
        cout<<max(workx,work2)<<endl;
    }
}