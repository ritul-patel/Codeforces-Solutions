//                             #249547681	Mar/04/2024 11:46UTC+5.5	Ritul_Patel	116A - Tram	GNU C++20 (64)	Accepted	30 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

int main() {

   int n;
	 cin >> n;
	 int capacity=0;
	 int stillnow=0;
	 for(int i=0;i<n;i++){
		 int a,b;
		 cin>>a>>b;
		 stillnow-=a;
		 stillnow+=b;
		 capacity=max(capacity,stillnow);

	 }
	 cout<<capacity;
    return 0;
}
