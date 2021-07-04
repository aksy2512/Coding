#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        int arr [n] ;
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        
        while(k>0){
            if(arr[0]>0){
                arr[0]=arr[0]-1;
                arr[n-1]=arr[n-1]+1;
            }
            k--;

        }
        for(int j=0;j<n;j++){
            cout<<arr[j]+" ";
        
        }


    }
}