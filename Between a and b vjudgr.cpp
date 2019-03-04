#include <iostream>
using namespace std;

#define ll long long

int main() {

    ll a,b,x,f = 0LL,g = 0LL, ct = 0LL;

    cin >> a >> b >> x;

    f = a/x;
    g = b/x;

    ct= g - f;

    if(a%x==0) ct++;

    cout << ct << endl;

    return 0;
}


