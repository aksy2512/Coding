#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    priority_queue<long long> maxh;
    priority_queue<long long,vector<long long>,greater<long long>> minh;
    long long sum =0;
    for(int i=0;i<n;i++){
        long long x; cin>>x;
        sum = sum + x;
    
        maxh.push(x);
        minh.push(x);
    }
    
    long long a[n] = {0};
    a[0] = sum;
     long long t1 = -1;
        long long t2 = -1;
    for(int i=1;i<n;i++){
        t1 = maxh.top();
        t2 = minh.top();
        a[i] = a[i-1] -t1-t2 + t1-t2;
        maxh.pop(); minh.pop();
        maxh.push(t1-t2);
        minh.push(t1-t2);
    }

    for(int i=0; i<q;i++){
        long long k; 
        cin>>k;
        cout<<a[k]<<endl;
    }
    return 0;
}