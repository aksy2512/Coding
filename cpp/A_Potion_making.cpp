#include<bits/stdc++.h>
using namespace std;

int main(){
 int t; cin>>t;
while(t--){
    int n;cin>>n;
    int val=__gcd(100-n,100);
    if(n==100){
        cout<<1<<endl;
    }
    else{
        cout<<100/val<<endl;
    }
}
}