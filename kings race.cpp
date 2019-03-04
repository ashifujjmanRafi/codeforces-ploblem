#include <iostream>
using namespace std;

int main()
{
    long long x,y,z,f,g;


    cin >> x >> y >> z;

    f = (x-y)+(x-z);
    g = (y-1)+(z-1);

    if(f<g) cout << "BLACK\n";

    else if(f==g) cout << "WHITE \n";
    else  cout << "WHITE \n";


    return 0;
}


