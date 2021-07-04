#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;

    while(t--){
        long long n ; cin>>n;
        if(n%3==0){
            cout<<n<<endl;
        }
        else{
            long long a = n/3+1;
            int no = a*3-n;
            if(no==1){
                string str = to_string(n);
                cout<<1<<str<<endl;
            }
            else{
              string str = to_string(n);
              if(str[0]=='1'){
                  cout<<str.substr(0,1)<<2<< str.substr(1,str.size())<<endl;
              }
              else{
                  cout<<2<<str<<endl;
              }
            }
        }
    }
}