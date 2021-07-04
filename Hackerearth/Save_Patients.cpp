#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;

    vector <int> v;
    vector <int> p;
    for(int i=0;i<n;i++){
        int c;cin>>c;
        v.push_back(c);
    }
     for(int i=0;i<n;i++){
        int c;cin>>c;
        p.push_back(c);
    }
    sort(v.begin(),v.end());
    sort(p.begin(),p.end());
    bool flag = true;
    for(int i=0;i<n;i++){
        if(v[i]<=p[i]){
            cout<<"No";
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Yes";
    }
}