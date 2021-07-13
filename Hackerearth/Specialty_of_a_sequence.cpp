#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n;
    cin>>k>>n;
    vector<long long> v;
    for(int i=0;i<k;i++){
        long long x; cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    long long sum =0;
    for(int i=0; i<k-n;i++){
        sum = sum + v[i];
    }
    cout<<sum;
}