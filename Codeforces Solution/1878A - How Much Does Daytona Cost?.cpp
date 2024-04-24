//#257976981	Apr/24/2024 18:04UTC+5.5	Ritul_Patel	1878A - How Much Does Daytona Cost?	C++17 (GCC 7-32)	Accepted	62 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Go ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(NULL)

// Loops
#define fi(l, r) for (ll i = l; i < r; i++)
#define fj(l, r) for (ll j = l; j < r; j++)
#define fk(l, r) for (ll k = l; k < r; k++)
#define fir(r, l) for (ll i = r; i >= l; i--)
#define fjr(r, l) for (ll j = r; j >= l; j--)
#define rfo(i,a,b)  for(ll i=a;i>=b;i--)
#define fq(q) while(q--)

// Inputs
#define in(n) ll n;cin>>n;
#define inn(n,k) ll n,k;cin>>n>>k;
#define strin(s) string s;cin>>s;
// Outputs
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl "\n"

// STL
#define pb push_back
#define ppb pop_back
#define F first
#define S second

// Sorting
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define rev(v) reverse(all(v))
#define maxa(v) *max_element(all(v))
#define mina(v) *min_element(all(v))

// Test Case
#define Test_case \
    int t = 1;    \
    cin >> t;     \
    while (t--)
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<int> v(n);
    bool ys = 0;
    fi(0, n)
    {
        int a;
        cin >> a;
        if(a==k) ys = 1;
    }
    
    if (ys)
    {
        yes;
    }
    else
    {
        no;
    }
    return;
}

int main()
{
    Go;
    Test_case
    {
        solve();
    }

    return 0;
}
