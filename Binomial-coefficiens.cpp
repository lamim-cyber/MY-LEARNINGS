#include<bits/stdc++.h>
#define ll long long
using namespace std;
int const N= 1e6+9, mod= 1e9+7;
int fac[N], inv[N], facinv[N];

void pre_calculate()// pre calculate the factorial and the invrse factorial
{
    fac[0] = 1;
    for (int i = 1; i < N; i++) fac[i] = 1LL * i * fac[i - 1] % mod;
    inv[1] = 1;
    for (int i = 2; i < N; i++ )
    {
        inv[i] = (-(1LL * mod / i) * inv[mod % i] ) % mod;
        inv[i] = (inv[i] + mod) % mod;
    }
    facinv[0] = 1;
    for (int i = 1; i < N; i++) facinv[i] = 1LL * inv[i] * facinv[i - 1] % mod;
}

int nCr( int n, int k)// just simple formula return
{
    if (n < k || n < 0 || k < 0) return 0;
    return 1LL * fac[n] * facinv[n - k] % mod * facinv[k] % mod;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    pre_calculate();
    int t;
    cin>> t;
    while(t--)
    {
        int n, k;
        cin>> n>> k;
        cout<< nCr(n, k)<< endl;
    }
}
//https://cses.fi/problemset/task/1079
