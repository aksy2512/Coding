#include<iostream>
using namespace std;

int main(){
    int x;
    string st;
    cin>>x>>st;
    int count=0;
    for(int i=0;i<x-1;i++){
         if(st[i]==st[i+1]){
             count++;
         }
    }
    cout<<count;
}