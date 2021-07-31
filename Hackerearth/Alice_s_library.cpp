#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a ; cin>>a;

    stack <char> s;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='/'){
           s.push(i);
           
        }
        else if (a[i]==92){
            if(!s.empty()){
            int t = s.top();
           reverse(a.begin()+t+1, a.begin()+i);
           s.pop();
            }
        }
        
        
    }
    for(int i=0;a[i]!='\0';i++){
        char c = a[i];
        if(isalpha(c)){
            cout<<a[i];
        }
    }
}