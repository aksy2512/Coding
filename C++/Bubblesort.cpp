#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,4,8,2,6,10,23,2,4,56,8,2};
    int n =sizeof(arr)/sizeof(int);
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-1-i;j++){
            
            if(arr[j]>arr[j+1]){
                flag=true;
               swap(arr[j],arr[j+1]);
            }
            
        }
        if(flag==false){
                break;
            }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}