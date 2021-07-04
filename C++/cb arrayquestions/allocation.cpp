#include<bits/stdc++.h>
using namespace std;

#define ll long long int

bool isvalid(ll books[], ll n, ll k, ll ans){
        int students = 1;
        ll current_pages =0;
        for(int i=0;i<n;i++){
            if(current_pages+books[i]>ans){
               students++;
               current_pages=books[i];
               if(students>k){
                   return false;
               }
            }
            else{
                current_pages+=books[i];
            }
        }
        return true;
}
ll binartsearchbooks(ll books[], ll n, ll k){
    ll total_pages =0; ll s=0,e=0;
    for(int i=0;i<n;i++){
        total_pages= total_pages+books[i];
        s= max(s,books[i]);
    }
    e=total_pages; ll finalans = 0;
    while(s<=e){
        ll mid = (s+e)/2;
        if(isvalid(books,n,k,mid)){
            
            finalans=mid;
            e=mid+1;

        }
        else{
            s=mid-1;
        }
        
    }
    return finalans;
}

int main(){
    int t; cin>>t;
    while(t--){
    ll n;
    ll k;
    cin>>n>>k;
    ll books [100005];
    for(int i=0;i<n;i++){
        int x; cin>>x;
        books[i] = x;
    }
    cout<<binartsearchbooks(books,n,k);
    }

}