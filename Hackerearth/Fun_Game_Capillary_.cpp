#include<bits/stdc++.h>
using namespace std;

void PrintStack(stack<int> s)
{
    stack<int> temp;
    while (s.empty() == false)
    {
        temp.push(s.top());
        s.pop();
    }  
 
    while (temp.empty() == false)
    {
        int t = temp.top();
        cout << t << " ";
        temp.pop();
 
        // To restore contents of
        // the original stack.
        s.push(t); 
    }
}

int main(){
    int n ;
    cin>>n;
    int arr [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lo=0;int hi=n-1;
    stack <int> st;
    while(lo <n &&
     hi>=0){
        if(arr[lo]>arr[hi]){
            st.push(1);
            hi=hi-1;
        }
        else if(arr[lo]<arr[hi]){
              st.push(2);
              lo=lo+1;
        }
        else{
            st.push(0);
            lo++;
            hi--;
        }
    }
    PrintStack(st);

}