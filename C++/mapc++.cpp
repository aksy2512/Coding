#include<bits/stdc++.h>
using namespace std;
 //key:value 
 // key can't be changed but value can be changed
 // maps always arrange its keys in soted order
 // In case the keys are of string type, they are sorted in dictionary order
int main(){
    map<int,string> customer;
    customer[100]="Gajendra";
    customer[123] = "Dilip";
    customer[145] ="Aditya";
    customer[171] ="Shahid";
    customer[200] ="Rajesh";

    map<int,string> c ={{100,"Gajendra"},{123,"Dilip"},{145,"Aditya"},{171,"Shahid"},{200,"Rajesh"}};
    map<int,string>::iterator p =customer.begin();
    customer.insert(pair<int,string>(205,"akshar"));

    while(p!=customer.end()){
        cout<<p->second<<endl;
        p++;
    }
    // Loop through map
    for(auto &el1: customer){
        cout <<el1.first<<" "<<el1.second<<endl;
    }
    cout<<customer.at(145)<<endl;
    cout<<customer.size()<<endl;
    cout<<customer.empty()<<endl;

    map<string,vector<int>> map;
    map["chotu"].push_back(84849);
    map["amit"].push_back(4040404);
    map["amit"].push_back(839803);

    for(auto &el1: map){
        cout<<el1.first<<endl;
        for(auto &el2: el1.second){
               cout<<el2<<" ";
        }
          cout<<endl;
    }

    
    
}