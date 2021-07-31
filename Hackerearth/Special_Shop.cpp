#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
    double n,a,b; cin>>n>>a>>b;
    double c = (n*b)/(a+b);
    double k =  c, p, fraction;
    fraction=modf(k,&p);
    if(fraction>0.5){
        c=ceil(c);
    }
    else{
        c=floor(c);
    }
    int ans = a*c*c + b*(n-c)*(n-c);
    cout<<ans<<endl;
    }

}