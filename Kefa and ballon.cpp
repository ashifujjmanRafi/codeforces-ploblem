#include <iostream>
using namespace std;

int main() {
        int n, m,x;
        cin >> n >> m;
        string s;
        cin >> s ;
        int a[30];
        for(int i = 0; i < s.size(); i++) {
            x = s[i] -'0'-48;
            a[x]++;
        }

    return 0;
}


