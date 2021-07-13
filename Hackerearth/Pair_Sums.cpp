#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int l =0; int r = n-1;
    bool flag = false;
    while(l<r){
        if(v[l]+v[r]==k){
            flag = true;
            break;
        }
        else if(v[l]+v[r]>k){
            r--;
        }
        else{
            l++;
        }
    }
    if(flag ==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}