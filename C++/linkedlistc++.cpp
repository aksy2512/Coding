#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;

    l.push_back(10);
    l.push_back(2);
    l.push_back(1);
    l.push_back(5);
    l.push_back(4);

    for(auto it = l.begin() ; it != l.end();it++){
        cout<<*it<<"-->";
    }
    cout<<"NULL"<<endl;
    l.reverse();
    for(auto it = l.begin() ; it != l.end();it++){
        cout<<*it<<"-->";
    }
    cout<<"NULL"<<endl;
    l.sort();
    for(auto it = l.begin() ; it != l.end();it++){
        cout<<*it<<"-->";
    }
    cout<<"NULL"<<endl;

    
}