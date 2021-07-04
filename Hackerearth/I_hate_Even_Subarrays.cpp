#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    string str;
    cin>>str;
    stack <char> s;
    for(int j=0;j<str.size();j++){
        if(s.empty()){
            s.push(str[j]);
        }
        else{
        if(str[j]!=s.top()){
        s.push(str[j]);
        }
        else{
            s.pop();
        }
        }
    }
    if(s.empty()){
        cout<<"KHALI"<<endl;
    }
        else{

string ans="";

while(!s.empty()){

ans.push_back(s.top());

s.pop();

}

reverse(ans.begin(),ans.end());

cout<<ans<<endl;

}   
    }
    
    }
