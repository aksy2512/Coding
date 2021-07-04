#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    string a;cin>>a;
    string b;cin>>b;
    bool check = false;
    int total =0;
    for(int i=0;i<n;i++){
      if(a[i]!=b[i]){
          check = true;
      }
      else {
        if(check){
            total++;
            check=false;
        }
        
      }
    }
    if(check){
        cout<<total+1;
    }
    else{
        cout<<total;
    }


    
}