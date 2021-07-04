#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v;
    long long sum =0;
    for(int i=0;i<2*n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=2*n-2;i>=0;i=i-2){
       sum = sum + v[i];
    }
    cout<<sum;
}