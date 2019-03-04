#include <iostream>
using namespace std;

int main() {

    int x,y=0,z=0,count=0,s=10000000;
    cin >> x;
    y=x/5;
    z=x%5;
    if(z>0){
    for(int i=1;i<=5;i++)
    {
        if(z%i==0)
        {
            count++;
            if(s>count) s= count;
        }

    }
    }
    else s=0;

    cout << y+s << endl;

    return 0;
}


