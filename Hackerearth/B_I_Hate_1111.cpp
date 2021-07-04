#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long a;cin>>a;
       if(a%11==0){
           cout<<"YES"<<endl;
       }
       else if(111*(a%11)<=a){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }

    }
}