#include<bits/stdc++.h>
using namespace std;

int maxp(int p [],int s [], int ts,int n ){
    if(n==0||ts==0){
        return 0;
    }
       int half,inc,exc=0;
       if(s[n-1]<=2*ts){
           half = p[n-1] + maxp(p,s,ts-(s[n-1]/2),n-1);
       }
       if(s[n-1]<=ts){
           inc = p[n-1] + maxp(p,s,ts-s[n-1],n-1);
       }
       exc = maxp(p,s,ts,n-1);

       return max(max(half,inc),exc);
    

}

int main (){
    int n, l;
    cin>>n>>l;
    int prices [n+1];
    int sweetness [n+1];
    int count =0;
    for(int i=0;i<n;i++){
       string s;char c;int sw;int p;
       cin>>s>>c>>sw>>p;
       if(c=='S'){
           prices[count] = p;
           sweetness[count] =sw;
           count++;
       }
    }
    cout<<maxp(prices,sweetness,l,count)<<endl;


}