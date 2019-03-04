#include <iostream>
using namespace std;

int main() {

    int i,j,a,x=0,y=0;

    cin >> j;

    for(i=0;i<j;i++)
    {
        cin >> a;

        if(a>10) cout << 10 << " " <<(a-10) << endl;
        else cout << a << " " <<0 << endl;
    }

    return 0;
}


