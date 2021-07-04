#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++){
        long long x;cin>>x;
        arr[i] = x;
    }
    long long l=0;
    sort(arr,arr+n);
    long long a = arr[n/2];
    for(int i=0;i<n;i++){
        l=l+(long long)abs(a-arr[i]);
        
    }
    cout<<l;

}