#include <iostream>
using namespace std;

int main() {

    int x,y,z=0;

    cin>> x >>y;

    z = x/y;

    if((x+z)%y==0) cout << x+z+1<<endl;
    else  cout << x+z  << endl;




    return 0;
}



