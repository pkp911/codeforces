#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5 + 7;
const ll M = 1e7 + 7;
ll arr[N];
ll P[M];
#define PI 3.141592653589793238462
#define set_bits(x) __builtin_popcountll(x)
#define all(v) sort(v.begin(), v.end())
#define rall(v) sort(v.rbegin(), v.rend())
#define ar(a) a.begin(), a.end()
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define rev(a) reverse(a.begin(), a.end())
#define f0(i, a, n) for (int i = a; i < n; i++)
#define f1(i, b, a) for (int i = b; i >= a; i--)
#define bbl(a) __builtin_popcountll(a)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define aaja(v)       \
    for (auto &x : v) \
        cin >> x;
#define cout1(v)           \
    for (auto &x : v)      \
    {                      \
        cout << x << endl; \
    }                      \
    nxt;
#define zout1(v)                                    \
    for (auto &x : v)                               \
    {                                               \
        cout << x.first << " " << x.second << endl; \
    }

bool sorting(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    if (a.first > b.first)
    {
        return (a.second <= b.second);
    }
}
bool isprime(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void xorprop(ll n)
{
    if (n % 4 == 1)
    {
        cout << 1 << endl;
    }
    else if (n % 4 == 2)
    {
        cout << n + 1 << endl;
    }
    if (n % 4 == 3)
    {
        cout << 0 << endl;
    }
    if (n % 4 == 0)
    {
        cout << n << endl;
    }
}
// ll kthNonDivisible(ll N, ll K){   ll L = 1;ll H = LLONG_MAX;ll ans = 0;while (L <= H){ll mid = (L + H) / 2;ll sol = mid - mid / N;if (sol > K){H = mid - 1;}else if (sol < K){ L = mid + 1;}else{ans = mid;H = mid - 1;}}return ans;}
void printbinary(int n)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((n >> i) & 1) << " ";
    }
    cout << endl;
}
bool isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return true;
    return false;
}
ll digitsum(ll n)
{
    ll sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
ll mmi(ll a, ll b, ll m)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans * a) % m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return ans;
}
ll multiply(ll a, ll b, ll m)
{
    ll ans = 0;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans + a) % m;
        }
        a = (a + a) % m;
        b /= 2;
    }
    return ans;
}
// vector<ll>primefactorsof(ll n)
ll mminvprime(ll a, ll b) { return mmi(a, b - 2, b); }
ll mod_add(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
ll mod_div(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, mminvprime(b, m), m) + m) % m;
} // only for prime m
void khatam(ll n) { cout << n << endl; }
void khatamsab(vector<ll> v)
{
    f0(i, 0, v.size()) { cout << v[i] << " "; }
    cout << endl;
}
vector<ll> identifier(vector<ll> v)
{
    all(v);
    int m = 0;
    v.resize(m = unique(v.begin(), v.end()) - v.begin());
    return v;
}
ll phin(ll n)
{
    ll number = n;
    if (n % 2 == 0)
    {
        number /= 2;
        while (n % 2 == 0)
            n /= 2;
    }
    for (ll i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            number = (number / i * (i - 1));
        }
    }
    if (n > 1)
        number = (number / n * (n - 1));
    return number;
} // O(sqrt(N))
ll xmodn(string str, ll n)
{
    ll len = str.length();
    ll num, rem = 0;
    f0(i, 0, len)
    {
        num = rem * 10 + (str[i] - '0');
        rem = num % n;
    }
    return rem;
}
void solve()
{
    string x, s1;
    cin >> x >> s1;
    map<ll, ll> m_p;
    map<ll, ll> m_p1;
    f0(i, 0, x.length()){
        m_p[x[i]-'0']++;
    }
    vector<ll>v;
     f0(i, 0, s1.length()){
        m_p1[s1[i]-'0']++;
    }
    if (m_p[5]+m_p[2]>0)
    {
        v.push_back((m_p1[5]+m_p1[2])/ (m_p[5]+m_p[2]));
       
    }
    if (m_p[6]+m_p[9]>0)
    {
        v.push_back((m_p1[6]+m_p1[9])/ (m_p[6]+m_p[9]));
    }
    f0(i, 0, 9){
       
        if (i==2||i==5||i==6)
        {
           continue;
        }
        else
        {
            if (m_p[i]>0)
            {
                v.push_back(m_p1[i]/m_p[i]); 
            }     
        }    
    }

    all(v);
    khatam(v[0]);

}
    int32_t main()
    {
        fast;
        ll test = 1;
        // cin>>test;
        while (test--)
        {
            solve();
        }

        return 0;
    }