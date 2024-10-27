/**
 *
 * Author : Md.Ariful Islam
 * Date : 28-10-2024
 * time : 00:06:54
 * Problem Name : D_Sum_of_Divisors
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define mem(dp, i) memset(dp, i, sizeof(dp));

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    vector<int> arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            arr[j]++;
        }
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += (1ll * arr[i] * i);
    }
    cout << ans << endl;
    return 0;
}