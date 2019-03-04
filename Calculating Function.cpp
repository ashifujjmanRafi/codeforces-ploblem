#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n,x=0;
    cin >> n;

    if(n%2==0)
    {
        cout << n/2<<endl;
    }
    else
    {
        x=((-1)*(n/2))-1;
        cout << x << endl;

    }


    return 0;
}


