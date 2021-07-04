#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string str){
       stack<char>st;
       int n = sizeof(str);
    for(int i=0;i<str.length();i++){
        if(str[i]=='('){
            st.push('(');
        }
         if(str[i]==')'){
         if(!st.empty()){
             st.pop();
        }
         else{
             return false;
           break;
        }
         }


    }
    
    return(st.empty());
}
// lifo
int main(){
     stack<int>s;
     s.push(1);
     s.push(2);
     s.push(3);
     s.push(4);

     while(!s.empty()){
         cout<<s.top()<<endl;
         s.pop();
     }
     string ch = "(((a+b)))";
     bool ans = isBalanced(ch);
     if(ans==true){
         cout<<"true";
     }
     if(ans==false){
         cout<<"false";
     }

}


