#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    string a;cin>>a;
    string b;cin>>b;
    int ans =0;
    for(int i=t-1;i>=0;i--){
        if(a[i]!=b[i]){
            if(a[i-1]==b[i]&&a[i-1]!=b[i-1]&&a[i]==b[i-1]){
                ans++;
                swap(a[i],a[i-1]);
            }
            else{
                a[i] = b[i];
                ans++;
            }
              
            
        }
        
    }
    cout<<ans;
}