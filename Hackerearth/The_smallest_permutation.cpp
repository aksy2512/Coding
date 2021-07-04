#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        
        int n;cin>>n;
        int arr[n+2];
        int min =200000;
        int in =0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr[i] = x;
            if(x<=min){
                in = i;
                min =x;
            }
        }
        swap(arr[0],arr[in]);
        for(int i=0; i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}