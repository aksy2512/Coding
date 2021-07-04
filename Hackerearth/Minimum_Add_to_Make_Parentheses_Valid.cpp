#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    stack <char> s;
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('){
            s.push(str[i]);
            count++;
        }
        else if(!s.empty()&&str[i]==')'){
            s.pop();
            count--;
        }
        else if(s.empty()&&str[i]==')'){
             count++;
        }
    }
    cout<<count;
}