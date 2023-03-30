/* श्री गणेशाय नमः */
/* ॐ नमः शिवाय */
/* ENCODED BY ------------------------------------> MAYANK PANDEY */
#include <bits/stdc++.h>
using namespace std;
#define all(v) \
    v.begin(), v.end()
#define ll long long
#define ull unsigned long long
#define te       \
    ll test;     \
    cin >> test; \
    for (ll tes = 1; tes <= test; tes++)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl \
    "\n"
#define nxt cout << endl;
#define in(v)         \
    for (auto &x : v) \
        cin >> x;
#define out(v)             \
    for (auto &x : v)      \
    {                      \
        cout << x << endl; \
    }                      \
    nxt;
#define mout(v)                                     \
    for (auto &x : v)                               \
    {                                               \
        cout << x.first << " " << x.second << endl; \
    }                                               \
    // nxt
#define FL                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
// fucntion
// ll MOD = 998244353;
ll power(ll a, ll b, ll m)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * 1LL * a) % m;
        a = (a * 1LL * a) % m;
        b >>= 1;
    }
    return ans;
}
inline ll ssqrt(ll x)
{
    long long l = sqrtl(x) - 50, r = sqrtl(x) + 150;
    l = max(l, 0ll);
    while (l < r - 1)
    {
        long long mid = l + r >> 1;
        if (mid * mid <= x)
            l = mid;
        else
            r = mid;
    }
    return l;
}

vector<ll> trial_division(ll num) // O (sqrt(num)+20)
{
    vector<ll> factor;
    for (ll i = 2; i * i <= num; i++)
    {
        while (num % i == 0)
        {
            factor.push_back(i);
            num /= i;
        }
    }
    if (num > 1)
    {
        factor.push_back(num);
    }
    return factor;
}
ll mod_add(ll a, ll b, ll m)
{
    return ((a % m) + (b % m)) % m;
}
ll mod_mul(ll a, ll b, ll m)
{
    return ((a % m) * (b % m)) % m;
}
ll mod_sub(ll a, ll b, ll m)
{
    return (((a % m) - (b % m)) % m + m) % m;
}
ll mod_div(ll a, ll b, ll m)
{
    return (mod_mul(a, power(b, m - 2, m), m)) % m;
}
vector<ll> know_all_prime(ll num)
{
    vector<ll> ans;
    for (ll i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            ans.push_back(i);
        }
        while (num % i == 0)
        {
            num /= i;
        }
    }
    if (num > 1)
    {
        ans.push_back(num);
    }
    return ans;
}
ll phi(ll num)
{
    ll ans = num;
    vector<ll> arr = know_all_prime(num);
    for (ll i = 0; i < arr.size(); i++)
    {
        ans *= (arr[i] - 1);
        ans /= arr[i];
    }
    return ans;
}
void extendgcd(ll a, ll b, vector<ll> &v) // pass an vector of size 3 with address
{
    if (b == 0)
    {
        v[0] = 1; // x = v[0]
        v[1] = 0; // y = v[1]
        v[2] = a; // v[2] = gcd(a,b)
        return;
    }
    extendgcd(b, a % b, v);
    ll x = v[1];
    v[1] = v[0] - v[1] * (a / b);
    v[0] = x;
    return;
}
ll modulo_inverse_prime(ll a, ll m)
{
    return power(a, m - 2, m);
}
ll modulo_inverse_nonprime(ll a, ll m)
{
    vector<ll> ans(3, 0);
    if (__gcd(a, m) != 1)
    {
        return -1;
    }
    extendgcd(a, m, ans);
    return (ans[0] % m + m) % m;
}
ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}
void solve();
vector<vector<ll>> sieve(1e5 + 10);
int main()
{
    fast;
    // te
    // {
    solve();
    // }
}
ll x1, yfir, x2, y2, num;
ll a, b, upar = 0, baaye = 0;
string s;
bool is_Possible(ll x)
{
    ll tleft = 0, tup = 0;
    ll temp = x / s.size();
    tleft = baaye * temp;
    tup = upar * temp;
    for (ll i = 0; i < x % s.size(); i++)
    {
        if (s[i] == 'U')
        {
            tup++;
        }
        else if (s[i] == 'D')
        {
            tup--;
        }
        else if (s[i] == 'L')
        {
            tleft--;
        }
        else
        {
            tleft++;
        }
    }
    ll reql = tleft - (x2 - x1), requp = tup - (y2 - yfir);
    if (abs(reql) + abs(requp) <= x)
    {
        return true;
    }
    return false;
}
const int N = 20010;
int n, p[N][5], cnt[N];
bool flag = false;
map<int, int> mp;

void solve()
{
    cin >> n;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            if (mp[x] == 0)
                mp[x] = j;
            p[j][i] = mp[x];
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 5; j++)
            for (int k = j + 1; k < 5; k++)
                if (p[i][j] != p[i][k])
                    cnt[i]++;
    for (int i = 0; i < n; i++)
        if (cnt[i] > 2)
        {
            flag = true;
            break;
        }
    if (flag)
    {
        cout << "NO" << endl;
        return 0;
    }
    int c[N];
    memset(c, 0, sizeof c);
    for (int i = 0; i < 5; i++)
    {
        int pos = 0;
        for (int j = 0; j < n; j++)
        {
            int k = 0, id = 0;
            for (int l = 0; l < n; l++)
                if (c[l] == 0 && (k == 0 || p[l][i] < p[id][i]))
                    k = 1, id = l;
            c[id] = j + 1;
            if (i == 0)
                pos = id;
        }
        if (c[pos] != 1)
        {
            cout << "NO" << endl;
            return 0;
        }
    }