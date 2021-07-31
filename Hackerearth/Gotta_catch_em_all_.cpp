#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll k ; cin>>k;
    vector <int> v;
    for(int i=0;i<k;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),greater<int>());
    int days = v[0];
    for(int i=0; i<k;i++){
        if(days-(i+1)<v[i]){
            days++;
        }
    }
    cout<<days+1;

}