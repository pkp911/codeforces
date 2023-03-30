#include <bits/stdc++.h>
#define ll long long
int main()
{
   ll n;
   cin>>n;
   vector<ll>v(n),x;
   for(int i=0;i<n;i++){
      cin>>v[i];
   }
   ll xor=0;
   for(int i=0;i<n;i++)
   {xor^=v[i];
      x.push_back(xor);
   }
for(int i=0;i<x.size();i++){
   if(x[i]==0){
      
   }
}
  
   return 0;
}