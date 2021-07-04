#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;cin>>x;
    
    long long v[x];
    for(int j=0;j<x;j++){
        cin>>v[j];
    }
    bool flag = true;
    for(int i=1;i<x-1;i++){
       
        if(v[i-1]>v[i]&&v[i+1]>v[i]){
            long long d1 = v[i-1]-v[i];
            long long d2 = v[i+1]-v[i];
            if(d2>d1){
                cout<<d2<<endl;
                flag=false;
                cout<<"yes"<<endl;
                break;
            }
        }
    }
    if(flag==true){
        cout<<"no"<<endl;
    }
}