#include <iostream>
using namespace std;

int main() {

    int x,y;
    cin>> x>> y;
    for (int i=1; ;i++)
    {
        x=x*3;
        y=y*2;
        if(x>y)
        {cout << i <<endl;
        break;
        }

    }


    return 0;
}


