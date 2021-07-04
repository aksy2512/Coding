#include<bits/stdc++.h>
using namespace std;

int main(){
    long long m,n;
    cin>>m>>n;
    priority_queue<long long> pq;
    for(int i=0;i<m;i++){
        long long x; cin>>x;
        pq.push(x);
    }
    long long sum =0;
    for(int i=0; i<n;i++){
        long long t = pq.top();
        sum = sum + t;
        pq.pop();
        pq.push(t-1);
        
    }
    cout<<sum;
}