#include<bits/stdc++.h>
using namespace std;

//1&1=1 1|1=1
//1&0=0 1|0=1
//0&1=0 0|1=1
//0&0=0 0|0=0
int main(){
 cout<<(5&7)<<endl;
 cout<<(5|7)<<endl;
 cout<<(8&11)<<endl;
 //  A number and with 1 tells whether the LSB is 1 or not
 // Bitwise XOR(^)
 //1^0=1
 //1^1=0
 //0^0=0
 //0^1=1
 // bita^bitb
 // if(bita!=bitb)-->1
 //else O/P-->0
 cout<<(5^7)<<endl;
 cout<<(5^10)<<endl;
 //set bits-->1
 //counting set bits
 int n;
 cin>>n;
 int count =0;
 int t=1;
 while(t!=128){
     if((n&t)>0){
       count++;
     }
     t=t*2;
     
 }
 cout<<count<<endl;
// left shift (<<)
// no=no<<1 ---> Discard MSB and add 0 at the left(SSB)
// basically shifting every "bit" one to the left
// a=a<<b -----> a=a*2^b

//right shift(>>)
// reverse of left shift
// a=a>>b ----> a=a/2^b

int no=1;
no=no<<4;

cout<<no<<endl;

no=16;
no = no>>1;
cout<<no<<endl;
int countset =0;
//count bits new approach
while(n!=0){
  if((n&1)>0){
    countset++;
  }
  n=n>>1;
}
cout<<countset;

}