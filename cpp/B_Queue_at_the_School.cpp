#include<iostream>
using namespace std;

int main(){
    int x,t;
    cin>>x>>t;
    string que;
    cin>>que;
    while(t>0){
        for(int i=0;i<x-1;i++){
            if(que[i]=='B'&&que[i+1]=='G'){
                swap(que[i],que[i+1]);
                i++;
            }
        }
        t--;
    }
    cout<<que;

}