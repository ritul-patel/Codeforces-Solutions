//253956368	Mar/29/2024 20:06UTC+5.5	Ritul_Patel	1823B - Sort with Step	C++17 (GCC 7-32)	Accepted	187 ms	18500 KB
#include <bits/stdc++.h>
using namespace std;
//----------------------------&&&---------------------------------------------------------&&&----------------------------------\\
//----------------------------&&&---------------------------------------------------------&&&----------------------------------\\

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
#define rev(v) reverse(all(v));
#define maxa(v) *max_element(v.begin(),v.end())
#define mina(v) *min_element(v.begin(),v.end())


// Test Case
#define Test_case \
    int t = 1;    \
    cin >> t;     \
    while (t--)

//----------------------------&&&---------------------------------------------------------&&&----------------------------------\\
//----------------------------&&&---------------------------------------------------------&&&----------------------------------\\

int solve() {
    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    map<int,int>m2;
    for(auto &x:v)
    {
        cin >> x;
    }
    
    vector<int>temp=v;
    sortall(temp);
    
    map<int, set<int>>m;
    fi(0,n)
    {
        m[i%k].insert(v[i]);
    }
    fi(0,n)
    {
        auto check = m[i%k];
        if(check.find(temp[i])==check.end())
        {
            m2[i%k]++;
        }
    }
    if(m2.size()==0)
    {
        cout<<0<<endl;
        return 0;
    }
    int count = 0;
    for(auto x:m2)
    {
        if(x.S==1){
            count++;
        }
        else{
            count+=100;
        }
    }
    if(count==2)
    {
        cout<<"1"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}

int main() {
    Go;
    Test_case {
        solve();
    }

    return 0;
}
