#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        long long a,b,k1,k2,M;
        cin>>a>>b>>k1>>k2>>M;

        long long lo =0;
        
        long long e=10e4;
        if(M>=(a*pow(e,k1)+b*pow(e,k2)))

{

cout<<"Love is immortal"<<endl;

}
else{
    long long as =0;
        while(lo<=e){
            long long mid=(lo+e)/2;
            long long ans = a*pow(mid,k1) + b*pow(mid,k2);
            
            if(ans>M){
                e=mid-1;

            }
            else{
                lo=mid+1;
            }
            

        }
        cout<<e<<endl;
        
        
    }
    }
}