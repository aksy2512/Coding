#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s ; 
    getline(cin,s);
    unordered_map<char,int> mp;
    //remove(s.begin(),s.end(),' ');
    //cout<<s;
    for(int i=0; i<s.length();i++){
        mp[s[i]]++;
    }
    char ans;
    int m =0;
    for(auto i:mp){
        if(i.second>m || i.second==m && i.first<ans){
            m=i.second;
            ans = i.first;
        }
    }
    cout<<ans<<" "<<m;
}