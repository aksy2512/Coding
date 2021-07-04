#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    set<int, greater<int> > s;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        s.insert(x);
    }
    long long ans = s.size()*(s.size()+1)/2;
    cout<<ans;
}