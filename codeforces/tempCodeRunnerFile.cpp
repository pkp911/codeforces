#include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define fo(b) for (ll i = 0; i < b; i++)
// #define fa(a, b) for (ll i = a; i < b; i++)
// #define vec(v) vector<ll> v;

// using namespace std;
// int main()
// {
//      ll test;
//      cin >> test;
//      while (test--)
//      {
//           ll n, m;
//           cin >> n >> m;
//           ll sumofarr1 = 0, sumofarr2 = 0, arr1[n], arr2[m];
//           vec(one);
//           vec(two);
//           ll minm = min(n, m);
//           fo(n)
//           {
//                cin >> arr1[i];
//                if (i < minm)
//                {
//                     sumofarr1 += arr1[i];
//                }
//                one.push_back(arr1[i]);
//           }
//           fo(m)
//           {
//                cin >> arr2[i];
//                if (i < minm)
//                {
//                     sumofarr2 += arr2[i];
//                }
//                two.push_back(arr2[i]);
//           }
//           ll p;
//           cin >> p;
//           if (p > sumofarr1 * sumofarr2)
//           {
//                cout << -1 << endl;
//                continue;
//           }
//           sort(one.begin(), one.end(), greater<ll>());
//           sort(two.begin(), two.end(), greater<ll>());

//           for (ll i = 0; i < n; i++)
//           {
//                cout << one[i] << " ";
//           }
//           cout << endl;
//           for (ll i = 0; i < m; i++)
//           {
//                cout << two[i] << " ";
//           }
//           cout << endl;

//           sumofarr1 = 0, sumofarr2 = 0;
//           ll ans = 0, iteration = 0;
//           for (ll i = 0; i < minm; i++)
//           {
//                sumofarr1 += one[i];
//                sumofarr2 += two[i];
//                if (sumofarr1 * sumofarr2 >= p)
//                {
//                     ans = i + 1;
//                     break;
//                }
//           }
//           cout << ans << endl;
//      }
//      return 0;
// }