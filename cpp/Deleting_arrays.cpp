#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		long  n,k;
		cin>>n>>k;
        
        long ans =ceil(n/(2.0*k+1));;
		cout<<ceil(ans)<<endl;
        
	}
}
