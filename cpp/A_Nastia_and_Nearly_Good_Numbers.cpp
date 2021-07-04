#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a;cin>>a;
        long long b;cin>>b;
        if(b==2){
            b=b*2;
        }
        bool flag = false;
        if(b==1){
            cout<<"NO"<<endl;
            flag = true;
        }
        if(b%2==1 & b!=1){

            b=b*2;
        }
        int x = b/2 -1;
        int y = b/2 +1;
        if(flag==false){
            cout<<"YES"<<endl;
        cout<<a*x<<" "<<a*y<<" "<<a*b<<endl;
        }
    }
}