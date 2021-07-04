#include<bits/stdc++.h>
using namespace std;

void prime_sieve(int *p){

    //first mark all odd number's prime
       for(int i=3 ; i<=1000000 ; i++){
           p[i] =1;
       }
       //Sieve
       for(long long i=3;i<=1000000;i+=2){
           // if the current number is not marked(it is prime)
     if(p[i]==1){
       //mark all the multiples of i as not prime
       for(long long j=i*i ;j<=1000000; j=j+1){
           p[j]=0;
       }
}
       }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n ; cin>>n;
    int p[1000005] ={0};
    prime_sieve(p);

}