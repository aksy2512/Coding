#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,m;
cin>>n>>m;

long long a = n-m;
long long ans = a+1;
long long kmax=(ans)*(ans-1)/2;
long long kmin=0;
long long size = n/m;
long long rem = n%m;
kmin = rem*(size+1)*(size)/2 + (m-rem)*(size)*(size-1)/2;

cout<<kmin<<" "<<kmax;


    
      

}