#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<long long> v;
    vector<int> p;
    map <long long,int> m;
    for(int i=0; i<n;i++){
       long long x; cin>>x;
       v.push_back(x);
    }
    for(int i=0;i<n;i++ ){
        int x;cin>>x;
        m.insert({v[i],x});
    }
    for(auto itr =m.begin(); itr!=m.end(); ++itr){
    p.push_back(itr->second);
    }
    long long overtakes =0;
    int pso =0;
    for(int i=0;i<m.size();i++){
        if(p[i]-1-i>0){
            overtakes = overtakes + p[i]-i-1;
            pso++;
        }
        if(p[i]-1-i<0){
            overtakes = overtakes + i-p[i]+1-pso;
            pso--;
        }
    }
    cout<<overtakes;

}