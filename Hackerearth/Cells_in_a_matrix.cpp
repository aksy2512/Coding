
#include<bits/stdc++.h>
using namespace std;




int main() {
   int n, k;

   scanf("%d%d", &n, &k);
   unordered_map<int,int> umapi;
   unordered_map<int, int>umapj;
   int counti,countj=0;
     long long a = 0;
   while(k--) {
      int i, j;

      scanf("%d%d", &i, &j);
      umapi[i]++;
      umapj[j]++;

      a = (n-umapi.size())*(n-umapj.size());
      cout<<a<<" ";
      
   }

   return 0;
}