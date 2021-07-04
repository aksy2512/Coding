#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> v;
    for(int i=0;i<n;i++){
        long long b;
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        long long x,y;
        cin>>x>>y;
        long long sum = x+y;
        int lo=0;
        int hi=n-1;
        int ans=(lo+hi)/2;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(v[mid]>sum){
                hi=mid-1;
            }
            if(v[mid]<sum){
                lo=mid+1;
            }
            ans=mid;
        }
        cout<<lo<<endl;
    }
}