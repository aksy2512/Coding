#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,char> umap={{1,'a'},{2,'b'}};
    cout<<umap[1]<<endl;
    cout<<umap[2]<<endl;

       //Update
    umap[1]='c';

    for(auto& elm:umap){
    cout<<elm.first<<" "<<elm.second<<" ";
    }
    cout<<endl;

    //find
    auto result = umap.find(2);
    if(result !=umap.end()){
        cout<<"Found "<<result->first<<" "<< result->second<< '\n';
    }else{
        cout<<"Not found";
    }
}