//                            #249355571	Mar/02/2024 22:52	Ritul_Patel	479A - Expression	GNU C++20 (64)	Accepted	15 ms	0 KB
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
    int a, b, c;
    cin >> a >> b >> c; 
    int a1 = a + b * c;
    int a2 = a * (b + c); 
    int a3 = a * b * c;
    int a4 = (a + b) * c;
     int a5 = a + b + c;
    cout << max({a1, a2, a3, a4, a5});
    return 0;
}
