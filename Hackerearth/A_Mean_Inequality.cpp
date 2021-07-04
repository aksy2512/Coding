#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[2*n+1];
        for(int i=0;i<2*n;i++){
            int x;cin>>x;
            arr[i] = x;
        }
       sort(arr,arr+2*n);
       int n_a[2*n];
       int j=n; int k =0;
        for(int i=0;i<2*n;i=i+2){
                n_a[i] = arr[k];
                n_a[i+1] = arr[j];
                k++;
                j++;
                
            
            
        }
        // if((arr[2*n-2]+arr[0])/2==arr[2*n-1]){
        //   swap(arr[2*n-1],arr[0]);

        // }
        // if((arr[2*n-1]+arr[1])/2==arr[0]){
        //   swap(arr[0],arr[1]);

        // }
        for(int i=0;i<2*n;i++){
            cout<<n_a[i]<<" ";
        }
        cout<<endl;
    }
}