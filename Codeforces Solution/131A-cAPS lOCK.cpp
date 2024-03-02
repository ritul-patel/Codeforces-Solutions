//                          #249358571	Mar/02/2024 23:15 Ritul_Patel	131A - cAPS lOCK	GNU C++20 (64)	Accepted	15 ms	0 KB
#include <iostream>
using namespace std;


int main()
{
    string s;
    char u;
    bool c = true;
    cin >> s;

    for(int i = 1; i < s.length(); i++)
    {
        if(islower(s[i]))
        {
            c = false;
        }
    }

    if(c == true)
    {
        for(int j = 0; j < s.length(); j++)
        {
            if(islower(s[j]))
                u = toupper(s[j]);
            else
                u = tolower(s[j]);
            cout << u;
        }
    }
    else
        cout << s;
    return 0;
}
