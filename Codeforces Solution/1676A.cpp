/////////////////////////////////////////////////////////////RITUL///////////////////////////////////
//1
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
      string s;
      cin >> s;
      for(int i = 0 ; i < 6 ; i++){
          if((s[0]+s[1]+s[2])==(s[3]+s[4]+s[5])){
              cout << "YES\n";
              break;
          }
          else{
              cout << "NO\n";
              break;
          }
      }
        
    }
  return 0;
}
//2
#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	if(s[0]+s[1]+s[2] == s[3]+s[4]+s[5]) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}

int main() {
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}
