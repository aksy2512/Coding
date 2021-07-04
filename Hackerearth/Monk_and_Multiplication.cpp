#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    long long product =1;
    priority_queue<int , vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(pq.size()==3){
         if(x>pq.top()){
             product = product*x/pq.top();
             cout<<product<<endl;
             pq.pop();
             pq.push(x);
         }
        
        else{
            cout<<product<<endl;
        }
        }
        else{
            pq.push(x);
            product = product *x;
            if(pq.size()!=3){
                cout<<-1<<endl;
            }
            else{
                cout<<product<<endl;
            }
        }
    }
}