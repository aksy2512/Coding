#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int m,n; cin>>m>>n;
        vector<int> v;
        for(int i=0;i<m;i++){
            int x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int msum =0;int  minsum =0;
        for(int i=0;i<m-n;i++){
          msum = msum + v[i];
          minsum = minsum + v[m-1-i];
        }
        cout<<minsum-msum<<endl;
    }
}