#include <iostream>
using namespace std;

int main() {

    int x,y,z;
    cin >> x>>y >> z;
    int a[5],m=0;
    a[0]=x+y*z;
    a[1]=x*(y+z);
    a[2]= x*y*z;
    a[3]= (x+y)*z;
    a[4]=x+y+z;
    for(int j =0;j<5;j++)
    {
        if(a[j]>m) m=a[j];
    }
    cout << m << endl;


    return 0;
}


