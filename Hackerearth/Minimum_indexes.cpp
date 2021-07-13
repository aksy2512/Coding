#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int sum_of_digits(int num){

int sum{};

while(num>0){

int a = num%10;

sum += a;



num /= 10;

}

return sum;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector <int> sumd;
    int n,q;cin>>n>>q;
    vector <int> v;
    for(int i{};i<n;i++){
        int x; cin>>x;
        v.push_back(x);
        sumd.push_back(sum_of_digits(x));
    }
    while(q--){
        int qu; cin>>qu;
        qu=qu-1;
        int ans =-1;
        for(int i=qu+1;i<n;i++){
           if(v[qu]<v[i]&&sumd[qu]>sumd[i]){
               ans = i+1;
               break;
           }
        }
        cout<<ans<<endl;
    }


}