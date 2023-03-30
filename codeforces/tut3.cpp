#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int main()
{
    fastio;
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>> v;
    for (ll i = 0; i < m; i++)
    {
        ll k,p;
        cin>>k>>p;
        v.emplace_back(make_pair(p,k));
    }
    sort(v.begin(),v.end(),greater<>());
    for (int i = 0; i < m; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
    ll cnt=0;
    for (ll i = 0; i < m; i++)
    {
        if(n==0)
        {
            break;
        }  
        if(v[i].second<=n)
        {
            n=n-v[i].second;
            cnt+=((v[i].first)*(v[i].second));
        }
        else
        {
            cnt+=((v[i].first)*n);
            break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}