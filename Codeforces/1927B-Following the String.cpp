#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >>t;
   while(t--){
       long long int n;
       cin >> n;
        vector<long long int> v(n) ;
       for(long long int i = 0 ; i < n ;i++){
           cin >> v[i];
       }
       map<char, int >mp ;
       for(char a = 'a';a<='z' ;a++){
           mp[a]=0;
       }
       for(int i : v){
           for(char a = 'a';a<='z' ;a++){
               if(mp[a]==i){
                   cout << a;
                   mp[a]++;
                   break;
               }
           }
       }
       cout << endl;
   }

    return 0;
}
