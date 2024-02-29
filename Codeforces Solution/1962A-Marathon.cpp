#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
    int a,b,c,d;
    int count = 0;
    cin >> a >> b >> c >> d;
     count = (b > a) + (c > a) + (d > a);
    cout << count << endl;
    }
    return 0;
}
