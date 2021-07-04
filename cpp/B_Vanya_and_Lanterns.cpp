#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l;
    cin>>n>>l;
    double arr [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lo=0;int hi=n-1;
    
    sort(arr,arr+n);
    double mini = arr[0];
    double mind =l/n;
    double minf = l - arr[n-1];
    double ans = max(minf,mini);
    for(int i=0;i<n-1;i++){
        mind = arr[i+1]-arr[i];
        mind=mind/2.00;
        ans = max(ans,mind);
    }
    
    
    cout<<fixed<<setprecision(10)<<ans;

}