#include<bits/stdc++.h>
using namespace std;

int getmin(stack <int> s){
  int min=s.top();
 stack<int>helper;
 while(s.empty()==false){
if(s.top()<min){
    min = s.top();
    s.pop();
}
else{
    helper.push(s.top());
    s.pop();
}
 }
}

int main(){
    int t;
    cin>>t;
    vector <int> ex;
    vector <string> na;
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        ex.push_back(x);
        if(x==-1){
            na.push_back("");
        }
        else{
            string st;
            cin>>st;
            na.push_back(st);
        }
    }
    stack <int> s;
    s.push(ex[0]);
    for(int i=1;i<6;i++){
        
        s.push(ex[i]);
        

    }
    
}