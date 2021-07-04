#include<bits/stdc++.h>
using namespace std;
int countsetbits(int n){
    int countset=0;
    while(n!=0){
  if((n&1)>0){
    countset++;
  }
  n=n>>1;
}
return countset;

}




int main(){
    int n , m , k;
    cin>>n>>m>>k;
    int count=0;
    vector<int>v;
    for(int i =1;i<=m+1;i++){
    int x;cin>>x;
    v.push_back(x);
    }
    for(int i=0;i<=m-1;i++){
        int c = (v[i]^v[m]);
        int a = countsetbits(c);
        if(a<=k){
            count++;
        }
    }
    cout<<count;

}