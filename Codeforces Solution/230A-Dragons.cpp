//                    #249423015	Mar/03/2024 13:24	Ritul_Patel	230A - Dragons	GNU C++20 (64)	Accepted	30 ms	100 KB
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
 
 
 
int main() {
    Go;
    int s, n, i;
 
    pair<int, int> a[10000];
    while (cin >> s >> n) {
        int c = 1;
        for (i = 0; i < n; i++) {
            cin >> a[i].F >> a[i].S;
        }
 
        sort(a, a + n);
        for (i = 0; i < n; i++) 
        {
            if (s <= a[i].F)
            {
                c = 0;
                break;
            }
            else 
            {
                s += a[i].S;
            }
        }
        if (c == 0) {
            no;
        } else {
            yes;
        }
    }
    return 0;
}
