#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5 + 7;
const ll M = 1e7 + 7;
ll arr[N];
ll P[N];
#define all(v) sort(v.begin(),v.end())
#define rall(v) sort(v.rbegin(),v.rend())
#define ar(a) a.begin(),a.end()
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define rev(a) reverse(a.begin(),a.end())
#define f0(i,a,n) for(int i=a;i<n;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
#define bbl(a) __builtin_popcountll(a)
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define aaja(v)         \
    for (auto &x : v) \
        cin >> x;
#define cout1(v)             \
    for (auto &x : v)      \
    {                      \
        cout << x << endl; \
    }                      \
    nxt;
#define zout1(v)                                     \
    for (auto &x : v)                               \
    {                                               \
        cout << x.first << " " << x.second << endl; \
    }       

// bool sorting(const pair<ll, ll> &a, const pair<ll, ll> &b)
// {
//    if (a.first>b.first)
//    {
//        return (a.second <= b.second);
//    }
   
  
// }
bool isprime(int n){ if(n==1) return false;if(n==2) return true;
for(int i=2;i*i<=n;i++){if(n%i==0) return false;}return true;}
void xorprop(ll n){if (n % 4 == 1){cout<<1<<endl;}else if (n % 4 == 2){ cout<<n+1<<endl;}if (n % 4 == 3){cout<<0<<endl;}if (n % 4 == 0){cout<<n<<endl;}}
//ll kthNonDivisible(ll N, ll K){   ll L = 1;ll H = LLONG_MAX;ll ans = 0;while (L <= H){ll mid = (L + H) / 2;ll sol = mid - mid / N;if (sol > K){H = mid - 1;}else if (sol < K){ L = mid + 1;}else{ans = mid;H = mid - 1;}}return ans;}
void printbinary(int n){for (int i = 6; i >=0; i--){cout<<((n>>i)&1)<<" ";}cout<<endl;} 
bool isSubstring(string s1, string s2){if (s2.find(s1) != string::npos) return true;return false;}
ll ok(ll n)
    {
        ll sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }
void solve(){
    ll n;cin>>n;
    vector<ll>v;
    aaja(v);
}
int32_t main()
{
   fast;
    ll test=1;
    //cin>>test;
    while (test--)
    {
       solve();
    }

   return 0;
}