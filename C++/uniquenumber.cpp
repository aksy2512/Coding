#include<bits/stdc++.h>
using namespace std;
// no^no=0;
//no^0=no;
int main(){
  int n,no;
  cin>>n; // n willl be odd, and every number will occur twice,
  // except for one number

  int ans =0;// Because 0 xor with no is no

  for(int i=0;i<n;i++){
      cin >>no;
      ans=ans^no;
      
  }

  cout<<"Unique number is : "<<ans;
}