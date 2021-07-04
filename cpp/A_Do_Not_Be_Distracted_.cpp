#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n ; cin>>n;
        string str;cin>>str;
        bool flag = true;
        for(int i=0;i<str.length()-1;i++){
            for(int j=str.length()-1;j>i;j--){
                if(str[i]==str[j]){
                    if(str[i]!=str[j-1]){
                         cout<<"NO"<<endl;
                         flag=false;
                         break;
                    }
                }
            }
            if(flag==false){
                break;
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
        }
    }

}