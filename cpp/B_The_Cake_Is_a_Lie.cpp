#include<bits/stdc++.h>
using namespace std;

int b =0;
void isPossible(int x , int y , int ex,int ey,int a ){
   if(x==ex && y==ex){
       b =a;
       return ;
   }
   if(x>ex||y>ex){
       return ;
   }
   

    isPossible(x+1,y,ex,ey,a+y);
    isPossible(x,y+1,ex,ey,a+x);

}

int main(){
 int t;cin>>t;
 
 while(t--){
     int n,m,k;
     cin>>n>>m>>k;
     int ans = m*n-1;
      if(ans==k){
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
    // isPossible(1,1,n,m,0);
    //   if(b==k){
    //      cout<<"YES"<<endl;
    //   }
    //   else{
    //      cout<<"NO"<<endl;
    //   }
      
    
 }

}