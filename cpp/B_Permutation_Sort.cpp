#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int s;cin>>s;
        int arr [s+1];
        int count=0;
        for(int i=0;i<s;i++){
          cin>>arr[i];
          if(i+1!=arr[i]){
              count++;
          }
          
        }
        if(count ==0){
            cout<<0<<endl;
        }
    
        else{
            if(arr[0]!=1&&arr[s-1]!=s){
            if(arr[0]==s&&arr[s-1]==1){
                cout<<3<<endl;
            }
            else{
                cout<<2<<endl;
            }
            }
            else{
                cout<<1<<endl;
            }
        }
        
    }
}