#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool found = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9' ) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
