#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> v;
        for(int i=0; i<n;i++){
            long long x; cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        long long min=0;
        long long max=0; int j=0;int i=1;
        for(int k=0;k<n/2;k++){
            long long c=v[i]-v[i-1];
            min = min +c;
            i=i+2;
            max = max +  v[n-j-1] - v[j];
            j++;
        
        }
        
        cout<<min;
        cout<<" "<<max<<endl;
    }
}