#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ; cin>>n;
    stack <int> mi ;
    stack <int> ma;
    vector <int> v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    int m = max(v[0],v[1]);
    int  b = min(v[0],v[1]);
    ma.push(m);
    mi.push(b);
    int count =1;
    for(int i=2;i<n;i++){
       if(v[i]>ma.top()){
           count ++;
           int x = ma.top();
           ma.pop();
           mi.pop();
           mi.push(x);
           ma.push(v[i]);
       }
       else if(v[i]<ma.top() && v[i]>mi.top()){
           count++;
           mi.pop();
           mi.push(v[i]);
       }
    }
    cout<<count;


}