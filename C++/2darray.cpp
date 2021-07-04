#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //input
    int a[100][100];
    int n,m;
    cin>>n>>m;
    int number=1;
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            a[row][col]=number;
            number++;
        }

    }
    // printing row wise
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    // column wise print
    for(int col=0;col<m;col++){
        for(int row=0;row<n;row++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    //printing lower diagonal matrix
    for(int row=0;row<n;row++){
        for(int col=0;col<=row;col++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    //printing upper diagonal matrix
      for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
           if(col>=row){ 
               cout<<a[row][col]<<" ";
           }
           else{
               cout<<"  ";
           }
        }
        cout<<endl;
    }
    // printing butterfly
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
           if(col+row==n-1||col==row){ 
               cout<<a[row][col]<<" ";
           }
           else{
               cout<<"  ";
           }
        }
        cout<<endl;
    }
    // wave print
    for(int col=0;col<m;col++){
        if(col%2==0){
            for(int row=0;row<n;row++){
                cout<<a[row][col]<<" ";
            }
        }
        else{
            for(int row=n-1;row>=0;row--){
                cout<<a[row][col]<<" ";
            }
        }
        
    }
    



    


}