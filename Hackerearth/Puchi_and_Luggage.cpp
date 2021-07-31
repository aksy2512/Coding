#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v;
        vector<int> o;
        for(int i=0;i<n;i++){
            int x ; cin>>x;
            v.push_back(x);
            o.push_back(x);
        }
        sort(o.begin(),o.end());
        
        for(int i=0;i<n-1;i++){
            int count=0;
            for(int j=i+1;j<n;j++){
                if(v[j]<v[i]){
                    count++;
                }
            }
            cout<<count<<" ";
        }
        cout<<0<<endl;
    }
}