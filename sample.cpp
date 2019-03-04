#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s, x, y; cin >> n >> s;
    vector<pair<int , int> >dragons;
    for (int i=0 ; i<s ; i++)
    {
        cin >> x >> y;
        dragons.push_back(make_pair(x, y));
    }
    sort(dragons.begin(), dragons.end());

    for (int i=0 ; i<s ; i++)
    {
        if (dragons[i].first>=n) {cout << "NO"; return 0;}
        else n+=dragons[i].second;
    }
    cout << "YES";
    return 0;
}
