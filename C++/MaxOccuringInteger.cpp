#include<iostream>
using namespace std;

int main(){
    int arr []={1,3,2,4,5,5,5,7,8};
    //constraint:- arr[i]<=size of arr
    int freq[9]={0};
    for(int i=0;i<9;i++){
       freq[arr[i]]++; 
    }
    int max=0,ans=0;
    for(int i=0;i<9;i++){
      if(freq[i]>max){
          ans=i;
          max=freq[i];
      }
    }
    cout<<ans;
}