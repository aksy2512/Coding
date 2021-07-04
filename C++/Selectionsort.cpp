#include<iostream>
using namespace std;

int main(){
    //on every position keep it's correct element
    int arr[] = {1,4,8,2,6,10,23,2,4,56,8,2,-2,3,3,-1,-2,-4};
    int n =sizeof(arr)/sizeof(int);
    for(int i=0;i<n-1;i++){
        int minv=arr[i];
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<minv){
                minv=arr[j];
                min=j;
            }
        }
        swap(arr[min],arr[i]);
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}