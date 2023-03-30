#include <bits/stdc++.h>
#define ll long long
const ll N = 1e5+10;
const ll M = 1e7+7;
ll arr[N];
ll P[M];
using namespace std;
vector<int> NGE(vector<int>v){
    vector<int> nge(v.size());
     stack<int>st;
     for (int i = 0; i < v.size(); i++)
     {
         while (!st.empty()&&v[i]>v[st.top()])
        {
           
            nge[st.top()] = i;
            st.pop();
            
        }
        st.push(i);
     }
     
    
     while (!st.empty())
     {
        nge[st.top()] = -1;
        st.pop();
     }
     return nge;
     

     
}
int main (){
    ll test;
    cin>>test;
    while(test--){
         
        ll n, m;
        cin>>n>>m;
        vector<ll>v;
        for (int i = 0; i <=n/2; i++)
        {
            v.push_back(n-i);
            v.push_back(i+1);
        }
        if (n%2==0)
        {
           for (int i = 0; i < n; i++)
           {
                cout<<v[i]<<" ";
           }
           
           cout<<endl;
          
        }
        else
        {
            v.push_back((n/2)+1);
            for (int i = 0; i < 5; i++)
           {
                cout<<v[i]<<" ";
           }
           
           cout<<endl;
        }
        
        
        
    }
    return 0;
}