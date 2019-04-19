#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> num;

    for(int i = 0; i < 4; i++) {
        int a; cin >> a;
        num.push_back(a);
    }
    sort(num.begin(), num.end());

    int a = num[3] - num[0];
    int b = num[1] - a;
    int c = num[2] - a;

    cout << a << " " << b << " " << c << endl;

    return 0;
}
