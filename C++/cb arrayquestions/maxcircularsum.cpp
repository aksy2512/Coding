#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n ; cin>>n;
        int arr[n];
        for(int i=0 ; i<n;i++){
            int x ; cin>>x;
            arr[i]=x;
        }
        int ms = 0; int cs =0; int msi =0;
        int mxsi=0;
        for(int i=0;i<n;i++){
            
            cs = cs + arr[i];
            if(cs>ms){
               mxsi=i;
               ms = cs;
            }
            if(cs<=0){
                cs=0;
                if(i==n-1){
                    msi=0;
                }
                else{msi= i+1;}
            }
        
        
        }
        int i=0;
        for(;i<{
            cs = cs + arr[i];
            if(cs>ms){
                ms = cs;
            }
            i++;
        }
        }

        cout<<ms<<endl;

    }
}