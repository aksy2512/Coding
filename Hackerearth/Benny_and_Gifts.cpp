#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    map <pair<int,int>,int> mp;
    int x =0 ,y=0;
    mp[{x,y}]++;
    int sum =0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='R'){
          y++;
          mp[{x,y}]++;
          if(mp[{x,y}]>1){
          sum = sum + 1;
          }
        }
        if(s[i]=='L'){
          y--;
          mp[{x,y}]++;
          if(mp[{x,y}]>1){
          sum = sum + 1;
          }
        }
        if(s[i]=='U'){
          x--;
          mp[{x,y}]++;
          if(mp[{x,y}]>1){
          sum = sum + 1;
          }
        }
        if(s[i]=='D'){
          x++;
          mp[{x,y}]++;
          if(mp[{x,y}]>1){
          sum = sum + 1;
          }
        }

    }
    cout<<sum;
}