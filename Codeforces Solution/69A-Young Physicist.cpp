// Mar/02/2024 12:42 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum = 0,xsum(0),ysum(0),zsum(0);
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >>z;
        xsum+=x;
        ysum+=y;
        zsum+=z;
    }
    if(xsum == 0 && ysum == 0 && zsum == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    return 0;
}
