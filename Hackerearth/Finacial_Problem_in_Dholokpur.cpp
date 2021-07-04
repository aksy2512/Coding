#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int s;
        cin>>s;
        int arr [s];
        for(int i =0;i<s;i++){
            cin>>arr[i];
        }
        stack <int> st;
        for(int i=s-1;i>=0;i--){
            st.push(1);
            int j=i-1;
            while(arr[j]<=arr[i]&&j>=0){
               st.top()=st.top()+1;
               j--;
            }
        
        }
        for(int i=0;i<s;i++){
            
       cout<<st.top()<<" ";
       st.pop();
        }
        
    }
}