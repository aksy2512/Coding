#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        double k,a,b;
        cin>>k>>a>>b;
        double x = (k*b)/(a+b);
        double intpart,fractpart;
        fractpart = modf(x,&intpart);
        
        if(fractpart>0.5){
            x=intpart+1;
        }
        else{
            x=intpart;
        }
        long long ans = a*x*x + b*(k-x)*(k-x);
        cout<<ans<<endl;
    }
}