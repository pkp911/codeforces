#include <bits/stdc++.h>
#define ll long long
const ll N = 1e4 + 10;
const ll M = 1e7 + 7;

ll arr[M];
double eps = 1e6-10;
// ll x = lower_bound(arr, arr+n, q)-arr; ---index
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
            {
                return false;
            }
            else
            {
                return true;
            }
    }
}
bool check(ll k, ll x)
{
    return k < x;
}
double p = 0;
ll n, m;
//ll arr[n];
bool check(ll h){
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i]>=h)
        {
            ans+=(arr[i]-h);
        }
        
    }
    return ans>=m;
    

}

 
int main()
{
    cin>>n>>m;
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    ll lo = 0, hi = 1e9, mid;
    while (hi-lo>1)
    {
      cout<<hi<<" "<<lo<<endl;
        mid = (lo+hi)/2;
        if (check(mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid-1;
        }
        
        
    }
    if (check(hi))
    {
       cout<<hi<<endl;
    }
    else
    {
        cout<<lo<<endl;
    }
    
    
    
   
    
    return 0;
}
