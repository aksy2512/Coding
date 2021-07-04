#include<iostream>
using namespace std;
int main(){
    int a[7]={2,4,8};
    int b[4]={0,1,5,7};

    int n =3,m=4;

    int i=n-1,j=m-1,k=m+n-1;
    while(i>=0&&j>=0){
        if(a[i]>=b[j]){
            a[k]=a[i];
            i--;
            k--;
        }
        else{
            a[k]=b[j];
            j--;
            k--;
        }
    }
    while(j>=0){
        a[k]=b[j];
        k--;
        j--;
    }
    for(int i=0;i<m+n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}