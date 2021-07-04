#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    int arr [t][3];
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int sum =0;
    bool flag =true;
    for(int i=0;i<3;i++){
        for(int j=0;j<t;j++){
            sum =sum+arr[j][i];
        }
        if(sum!=0){
            flag=false;
            cout<<"NO";
            break;
        }
    }
    if(flag==true){
        cout<<"YES";
    }
    
}