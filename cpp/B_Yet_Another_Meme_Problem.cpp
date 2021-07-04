#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
   long long a,b;
   cin>>a>>b;
   long long count = log10(b);
   if(b+1==(long double)pow(10,count+1)){
       cout<<a*(count+1)<<endl;
   }
   else{
       cout<<a*(count)<<endl;
   }


    }
}