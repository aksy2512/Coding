#include<bits/stdc++.h>
using namespace std;

// vector - self growable array
int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(8);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);


    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    
}