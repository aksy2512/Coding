#include<bits/stdc++.h>
using namespace std;
// int fact(int n);
// int nCr(int n, int r)
// {
//     return fact(n) / (fact(r) * fact(n - r));
// }
 
// int fact(int n)
// {
//     int res = 1;
//     for (int i = 2; i <= n; i++)
//         res = res * i;
//     return res;
// }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    unordered_map<long long ,long long> m;
    for( int i=0;i<n;i++){
        long long x ; cin>>x;
        m[x]++;
    }
    long long ans =0;
    for(auto i:m){
        long long x = i.second;
        if(x>1){
            ans = ans + (x*(x-1))/2;
        }
    }

    cout<<ans;
}