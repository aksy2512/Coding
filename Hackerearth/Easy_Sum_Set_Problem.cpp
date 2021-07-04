#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin>>n;
    vector <int> a;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    int m;cin>>m;
    vector <int> c;
    for(int i=0;i<m;i++){
        int x; cin>>x;
        c.push_back(x);
    }
    
    map <int,int> b;
    int k = m/n;
    if(k%2==0){
        k = k -1;
    }
    for(int j =0;j<n;j++){
    for(int i=0;i<m;i++){
       int d = c[i] - a[j];
       if(d>0){
       b[d]++;
       }

    }
    }
    for( auto y : b){
        if(y.second==n){
        cout<<y.first<<" ";
        }
    }

}