#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int arr[m];
    int ans=0;
    int init=1;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        
        ans+=(x-init+n)%n;
        init=x;

    }
    cout<<ans;
    
}