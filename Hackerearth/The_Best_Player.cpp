#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<string,long long> &a,
              const pair<string,long long> &b)
{
    if(a.second==b.second){
        return (a.first>b.first);
    }
    else{
    return (a.second < b.second);
    }
}

int main(){
    int t; cin>>t;
    int n;cin>>n;
    vector <pair<string,long long>> v;
    for(int i=0;i<t;i++){
         string s;cin>>s;
         long long fq ; cin>>fq;
         v.push_back(make_pair(s,fq));
    }
    sort(v.begin(), v.end(), sortbysec);
    for(int i=0;i<n;i++){
        cout<<v[t-1-i].first<<endl;
        
    }
}