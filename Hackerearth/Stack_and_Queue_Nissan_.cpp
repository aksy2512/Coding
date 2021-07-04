#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    queue<int>q;
    stack<int>s;
    while(n--){
        int x;cin>>x;
        q.push(x);
        s.push(x);
    }
    int sum=0;
    bool flag = false;
    while(k--){
        if(flag==true){
        if(s.top()>q.front()){
            sum = sum + s.top();
            s.pop();
        }
        else{
            sum = sum + q.front();
            q.pop();
        }
    }
    cout<<sum;

}