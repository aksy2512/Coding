#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    vector <int> v;
    vector <int> o;
    for(int i=0;i<t;i++){
       int x;cin>>x;
       v.push_back(x);
       o.push_back(x);
    }
    sort(v.begin(),v.end());
     int count = 0;
    int d = 0;
    for(int i=0;i<t;i++){
    d=o[i]-v[i];
    if(count==0){
    if(d!=0){
        count ++;
        if(o[i+d]-v[i+d]==0-d){
            cout<<"yes"<<endl;
            int s=i+1; int e = s+d;
            cout<< s ;
            cout<<" ";
            cout<< e<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    }
    }
    if(count==0){
        cout<<"yes"<<endl;
         cout<<"1 1"<<endl;
    }
}