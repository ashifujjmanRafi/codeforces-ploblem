#include <iostream>
using namespace std;

int main() {

    int x,y,z=0;
     cin >> x;
     for(int i=1;i<=x; i++)
     {
         cin >> y;
         z=(360%(180-y));
         if(z == 0) cout << "YES" << endl;
         else cout << "NO" << endl;
     }

    return 0;
}


