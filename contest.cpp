#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;

    cin >> n;
    vector <int> v;

    int x;
    while(n--) {
        cin >> x;

        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cin >> n;

    while(n--) {
        cin >> x;

        auto up = upper_bound(v.begin(), v.end(), x);
        int ans = up - v.begin();
        cout << *up << endl;
        cout << ans << endl;
    }

    return 0;
}
