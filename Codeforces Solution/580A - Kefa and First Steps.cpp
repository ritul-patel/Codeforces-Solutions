//   249915633	Mar/06/2024 14:56UTC PM	Ritul_Patel	580A - Kefa and First Steps	C++20 (GCC 11-64)	Accepted	31 ms	800 KB
#include <bits/stdc++.h>
using namespace std;
//----------------------------&&&-----------------------------------------------------------&&&----------------------------------\\
//----------------------------&&&-----------------------------------------------------------&&&----------------------------------\\
 
#define ll long long int
#define ld long double
#define Go ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(NULL)
 
// Loops
#define fo(i,n) for(ll i=0;i<n;i++)
#define rfo(i,a,b)  for(ll i=a;i>=b;i--)
#define endl "\n"
#define rev(v) reverse(all(v));
 
// Outputs
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
 
// STL
#define pb push_back
#define F first
#define S second
 
// Sorting
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define maxa(v) *max_element(v.begin(),v.end())
#define mina(v) *min_element(v.begin(),v.end())
 
// Test Case
#define Test_case \
    int t = 1;    \
    cin >> t;     \
    while (t--)
 
//----------------------------&&&-----------------------------------------------------------&&&----------------------------------\\
//----------------------------&&&-----------------------------------------------------------&&&----------------------------------\\
 
 
int solve(vector<int> A){
   int n = A.size();
   int y = A[0];
   int d = 1;
   int c = 1;
   for (int i = 1; i < n; i++){
      int x = A[i];
      if (x >= y)
         d++;
      else
         d = 1;
      y = x;
      c = max(c, d);
   }
   return c;
}
int main(){
   Go;
   int n;
   cin >> n;
   vector<int> v(n);
   fo(i,n){
       cin >> v[i];
   }
   cout << solve(v) << endl;
}
