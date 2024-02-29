#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, sum = 0;
    cin >> n;
    vector<int> v(n); 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    sum = sum / 2;
    int cnt = 0;
    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        ans += v[i];
        cnt++;
        if (ans > sum)
            break;
    }
    cout << cnt << endl;
    return 0;
}
