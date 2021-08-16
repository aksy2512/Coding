#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int R1,W1,C1,R2,W2,C2; cin>>R1>>W1>>C1>>R2>>W2>>C2;
        int a =0,b=0;
        if(R1>R2){
            a++;
        }
        else{
            b++;
        }
        if(W1>W2){
            a++;
        }
        else{
            b++;
        }
        if(C1>C2){
            a++;
        }
        else{
            b++;
        }
        if(a>b){
            cout<<"A"<<endl;
        }
        else{
          cout<<"B"<<endl;
        }
    }
}