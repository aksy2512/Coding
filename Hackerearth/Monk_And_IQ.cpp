#include<bits/stdc++.h>
using namespace std;

int main(){
    int c,p,n;
    cin>>c>>p>>n;
    priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq;
    int arr[c+1]={0};
    for(int i=0;i<n;i++){
        int x ; cin>>x;
        pq.push({x,i+1,x});
        arr[i+1]++;
    }
    for(int i=c;i<n;i++){
        pq.push({0,i+1,0});
    }
    for(int i=0; i<p;i++){
        int x ; cin>>x;
        int first = get<0>(pq.top());
        int sec = get<1>(pq.top());
        int third = get<2>(pq.top());
        cout<<sec<<" ";
        pq.pop();
        if(arr[sec]==0){
        pq.push({x,sec,x});
        arr[sec]++;
        }
        else if(arr[sec]==1){
            if(x<third){
              pq.push({first*x,sec,x});
              arr[sec]++;
            }
          else{
              pq.push({first*x,sec,third});
              arr[sec]++;
          }

        }
        else{
            if(x<third){
                pq.push({first,sec,third});
                arr[sec]++;
            }
            else{
                pq.push({first*x/third,sec,x});
                arr[sec]++;
            }
        }
    }
}