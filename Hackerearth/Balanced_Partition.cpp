#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n ;cin>>n;
        map<int,int> m;
        for(int i=0;i<n;i++){
             int x,y,h;cin>>x>>y>>h;
             if(i==0){
                m.insert(make_pair(y-x,h));
             }
             else{
             auto j = m.find(y-x);
             if(j==m.end()){
                 m.insert(make_pair(y-x,h));
             }
             else{
                
               j->second+=h;
             }
             }

        }
         
        vector <int> v; long long sum =0;
        for(auto i:m){
            v.push_back(i.second);
            sum = sum + i.second;
        }
        int cs =0;bool flag = true;
        for(int i=0;i<=n-2;i++){
            cs =cs+v[i];
            if(sum -cs == cs){
                cout<<"YES"<<endl;
                flag = false;
                break;
            }
             else if(  sum -cs-v[i+1]==cs ){
                cout<<"YES"<<endl;
                flag = false;
                break;
            }
        

            
        }
        if(m.size()==1){
            cout<<"YES"<<endl;
        }
        else if(flag){
            cout<<"NO"<<endl;
        }


    }
}