#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>::iterator it;
    vector<int> v;
    vector<int> o;
    int arr [n+1] ={0};
    for(int i=0; i<n;i++){
        int x ; cin>>x;
        v.push_back(x);
        o.push_back(x);
    }
    long long sum =0;
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0; i<n/2;i++){
        auto it = find (o.begin(), o.end(), v[i]);
        if(it != o.end()){
            int index = it - v.begin();
            swap(o[index],o[0]);
        }
    }
    for(int i=0;i<n;i++){
        sum = sum + abs(o[i]-i-1);
    }
    cout<<sum;
}