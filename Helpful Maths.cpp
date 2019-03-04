#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int i;
    cin >> s;

    for(i=0; i<s.size()-1;i++)
    {
        sort(s.begin(),s.end());

        if(s[i]!='+')
            cout << s[i] << "+";

    }
    cout << s[i] <<endl ;

    return 0;
}


