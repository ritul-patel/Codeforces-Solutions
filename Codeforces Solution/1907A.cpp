#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        for(char i = '1'; i <= '8'; ++i){
			if(s[1] != i) cout << s[0] << i << "\n";
		}
		for(char i = 'a'; i <= 'h'; ++i){
			if(s[0] != i) cout << i << s[1] << "\n";
		}
        
        
    }
    
    return 0;
}

