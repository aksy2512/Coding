#include<bits/stdc++.h>
using namespace std;

int main(){
   int arr[] = {31,41,59,26,41,58};
   for(int j=1;j<6;j++){
       int i=j-1;
       while(arr[i]>arr[i+1] & i>=0){
           swap(arr[i],arr[i+1]);
           i=i-1;
       }
   }
   for(int i=0;i<6;i++){
       cout<<arr[i]<<" ";
   }
}