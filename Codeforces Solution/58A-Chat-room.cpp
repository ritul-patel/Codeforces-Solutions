// 249274749	Mar/02/2024 13:47	Ritul_Patel	58A - Chat room	GNU C++20 (64)	Accepted	15 ms	0 KB
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,target;
    cin >> s;
    int k = 0;
    target = "hello";
    int n = s.length();
    for(int i = 0 ; i < n ; i++){
        if(s[i]==target[k]){
            k++;
        }
    }
    if(k == target.length()){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}
