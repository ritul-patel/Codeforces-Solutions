//                           #249278610	Mar/02/2024 14:12UTC+5.5	Ritul_Patel	122A - Lucky Division	GNU C++20 (64)	Accepted	30 ms	0 KB
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n ;
    cin>>n;
    if(n%4==0 || n%7==0 || n%44==0|| n%47==0 || n%74==0 ||n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%744==0 || n%477==0 || n%747==0 || n%774==0 || n%777==0 )
    {
        cout<<"YES";
    }
    else
        {
        cout<<"NO";
    }
    return 0;
}
