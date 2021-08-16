#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll solve(ll n){
 ll count=0;
    while(n!=0){
      ll c = (ll)log2(n);
      if(c%2==1){
      n=n-(ll)pow(2,c);
      }
      else{
          c=c-1;
          n=n-(ll)pow(2,c);
      }
      count++;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        ll n,x; cin>>n>>x;
        if(x==0){
            if(n%2==1){
                cout<<-1<<endl;
            }
            else{
                cout<<solve(n)<<endl;
            }
        }
        else{
            if(x<n){
            ll c =(ll)log2(n);
            cout<<c<<endl;
            if(c%2==1){
      ll t=n-(ll)pow(2,c);
      }
      else{
         c=c-1;
          ll t=n-(ll)pow(2,c);
      }
            
            if(t<=x && t!=0){
                cout<<2<<endl;
            }
            else if(t==0){
               cout<<1<<endl;
            }
            else{
                if(n%2==1){
                n=n-x;
                if(n%2==1){
                    n=n+1;
                }
                cout<<solve(n)+1<<endl;
            }
            
            else{
                cout<<solve(n)<<endl;
            }
            }

        }
        
        else{
            cout<<1<<endl;
        }
        }
    }
}