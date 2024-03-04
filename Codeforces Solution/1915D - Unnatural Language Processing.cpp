//               #249572640	Mar/04/2024 15:46	Ritul_Patel	1915D - Unnatural Language Processing	GNU C++20 (64)	Accepted	15 ms	1300 KB
#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define all(x) x.begin(), x.end()
#define Go (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define F first
#define S second
#define Test_case \
    int t = 1;    \
    cin >> t;     \
    while (t--)

bool is_s(char ch)
{
    return ch=='a' || ch=='e';
}
void solve() 
{
    int n;
    cin >> n;
    string s,ans;
    cin >> s;
   
    for(int i = n-1 ; i >= 0 ; --i)
    {
       if(is_s(s[i]) && !is_s(s[i-1]))
       {
           ans.pb(s[i]);
           ans.pb(s[i-1]);
           ans.pb('.');
           --i;
       }
       else
       {
           ans.pb(s[i]);
       }
    }
        ans.pop_back();
        reverse(all(ans));
        cout<<ans<<endl;
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
