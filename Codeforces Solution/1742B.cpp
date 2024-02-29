#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        bool distinct = true;
        for(int i = 1 ; i < n ; i++) {
            if(a[i] == a[i - 1]) {
                distinct = false;
                break;
            }
        }
        if(distinct) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
