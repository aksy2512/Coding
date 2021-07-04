#include<iostream>
using namespace std;

//this can only be applied to sorted arrays
int main(){
int arr[] ={1,3,4,5,9};
int n = sizeof(arr)/sizeof(int);
int s=0;int e=n-1;
int key=5;
int ans=-1;
while(s<=e){
 int m=(s+e)/2;
 if(arr[m]==key){
    ans=m;
    break;
 }
 else if(arr[m]>key){
     e=m-1;
 }
 else{
     s=m+1;
 }
}
cout<<ans;

}