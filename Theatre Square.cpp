#include <iostream>
using namespace std;

int main()
{
    long long x,y,z,a,b;

     cin >> x >> y >> z;

     a= x/z;

     if(x%z!=0)
     {
         a++;
     }

     b = y/z;

     if(y%z!=0)
     {
         b++;
     }
     cout << a*b << "\n";

     return 0;
}
