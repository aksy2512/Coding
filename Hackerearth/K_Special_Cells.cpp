#include<bits/stdc++.h>
using namespace std;
// recursive approach
int nps(int m, int n){
   if(m==0&&n==0){
       return 1;
   }
   if(m<0||n<0){
       return 0;
   }

   int count = nps(m-1,n);
   count = count + nps(m,n-1);
   return count;
}

int npsdp(int n,int m){
    int dp [n+1][m+1]={0};
    for(int i=0;i<=n;i++){
       for(int j=0;j<=m;j++){
           if(i==0|j==0){
               dp[i][j]=1;
           }
           else{
               dp[i][j]=dp[i-1][j] + dp[i][j-1];
           }
       }
    }
    return dp[n][m];

}

int main(){
    long long max = 10e9+7;
    int t;
    cin>>t;
    while(t--){
       int n,m,k;
       long long ans=0;
       cin>>n>>m>>k;
       while(k--){
           int x,y,p;
           cin>>x>>y>>p; 
              
            ans=(ans+p*npsdp(n-x,m-y))%(max);
       }
       cout<<ans<<endl;
    }
}
