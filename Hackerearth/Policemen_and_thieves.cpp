#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int c =0;
        for(int i=0;i<n;i++){
            vector<int> v;
            for (int j = 0; j < n; j++)
            {
                char s ; cin>>s;
                if(s=='P'){
                    v.push_back(0);
                }
                else{
                    v.push_back(1);
                }
            }
            for(int j=0;j<n;j++){
                if(v[j]==0){
                    int t = max(0,j-k);
                    for(int f=t;f<=min(n-1,j+k);f++){
                        if(v[f]==1){
                            v[f]=2;
                            c++;
                            break;
                        }
                    }
                }
            }
            
            
        }
        cout<<c<<endl;
    }
}