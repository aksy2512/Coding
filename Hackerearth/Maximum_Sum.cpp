#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;cin>>t;
    long long sum =0;
    vector <long long> m;
    int count =0;
    unordered_map<long long,long long> mp;
    for(int i=0;i<t;i++){
        int x;cin>>x;
        m.push_back(x);
        mp[x]++;
    }
    
    for(int i=0;i<t-1;i++){
        int cs = m[i]; int msum=m[i];
        if(m[i]>0){
         for(int j =i+1;j<t;j++){
             
             cs = cs + m[j];
             if(cs<=0){
               break;
             }
             if(cs>msum){
                 msum =cs;
                 mp[msum]++;
             }
         }
        }
    }
    for(auto it:mp){
        sum = sum + it.first;
    }
    cout<<sum;
    

}
// #include<bits/stdc++.h>

// using namespace std ;

 

// int main(){

// int n ; cin>>n ;

// long long a[n] ;

// long long sum = 0 , maxi = INT_MIN ;

// unordered_set<long long> s ;

// for( int i = 0 ; i < n ; i++ )

// {

// cin>>a[i] ;

// sum = max( sum+a[i] , a[i] ) ;

// maxi = max( maxi , sum );

// s.insert( maxi ) ;

// }
 

// for( int i = 1 ; i < n ; i++ )

// {

// s.insert( a[i] ) ; sum = a[i] ; maxi = a[i] ;

// for( int j = i+1 ; j < n ; j ++ ){

// sum = max( sum + a[j] , a[j] ) ;

// maxi = max( maxi , sum );

// s.insert( maxi ) ;

// }

// }

 

// sum = 0 ;

// for( auto x : s ){

// sum += x ;

// }

// cout<<sum<<endl ;

// }