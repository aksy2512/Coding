#include<bits/stdc++.h>
using namespace std;

int countDivisors(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;
 
            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}

int main(){
    int t;cin>>t;
    vector <int> v;
    for(int i=0;i<t;i++){
        int x ; cin>>x;
        int c = countDivisors(x);
        v.push_back(c);
        
    }
    map <int,int> m;
    for(int i=0;i<t;i++){
            m[v[i]]++;
    }
    long long sum =0;
    for(auto it:m){
         sum = sum + (it.second)*(it.second-1)/2  ;
    }
    cout<<sum;
}