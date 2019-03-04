#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, s3, s;

    cin >> s1 >> s2 >> s3;

    s1.append(s2);

    sort(s1.begin(),s1.end());

    sort(s3.begin(),s3.end());


    if(s1.compare(s3) == 0) {
        cout << "YES\n";
    } else cout << "NO\n";
}
