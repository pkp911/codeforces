#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> findMaximumValue(vector<int> prices, vector<int> pos, vector<long long> amount)
{
    vector<ll> v1(prices.size());
    v1[0] = prices[0];
    for (ll i = 1; i < prices.size(); i++)
    {
        v1[i] = prices[i] + v1[i - 1];
    }

    vector<ll> p(prices.size());
    vector<int> p1(pos.size());
    for (int i = 0; i < prices.size(); i++)
    {
        p[i] = prices[i];
    }
    for (int i = 1; i < p.size(); i++)
    {
        p[i] += p[i - 1];
    }
    ll ans = 0;
    for (ll i = 0; i < pos.size(); i++)
    {
        ll t = p[pos[i] - 1] + amount[i];
        int ind = lower_bound(p.begin(), p.end(), t) - p.begin();
        int ans = ind - pos[i];
        p1[i] = ans;
        if (p[ind] == t)
        {
            ans++;
            p1[i] = ans;
        }
    }
    return p1;
}
int32_t main()
{
    int n;
    cin>>n;
    vector<int>prices(n);
    for (int i = 0; i < n; i++)
    {
        cin>>prices[i];
        
    }
    int x;
    cin>>x;
    vector<int>pos(x);
    for (int i = 0; i < x; i++)
    {
        cin>>prices[i];
        
    }
    vector<long long >amount(x);
    for (int i = 0; i < x; i++)
    {
        cin>>amount[i];
        
    }
    findMaximumValue(prices, pos, amount);
    
    return 0;
}
