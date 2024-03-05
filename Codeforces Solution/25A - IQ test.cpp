//             #249815054	Mar/05/2024 21:31 PM	Ritul_Patel	25A - IQ test	C++20 (GCC 11-64)	Accepted	30 ms	0 KB
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


int main() {
    Go;
   
   ll n,x,even(0), lastodd(0), lasteven(0);
   cin >> n;
   for(int i = 1 ; i <= n ;++i){
      cin >> x;
      if((x % 2) == 0 ){
          even+=1;
          lasteven = i;
      }
      else{
          even-=1;
          lastodd = i ;
      }
   }
    cout << (even > 0 ? lastodd : lasteven) << endl;
    return 0;
}
