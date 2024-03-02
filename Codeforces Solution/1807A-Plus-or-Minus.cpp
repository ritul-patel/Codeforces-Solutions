//                    #249361120	Mar/02/2024 23:34 Ritul_Patel	1807A - Plus or Minus	GNU C++20 (64)	Accepted	15 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define all(x) x.begin(), x.end()
#define Go ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(NULL)
#define F first
#define S second
#define Test_case \
    int t = 1;    \
    cin >> t;     \
    while (t--)

void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    if((a + b) == c) {
        cout << "+" << endl;
    } else if((a - b) == c) {
        cout << "-" << endl;
    } 
}

int main() {
    Go;
    Test_case {
        solve();
    }

    return 0;
}
