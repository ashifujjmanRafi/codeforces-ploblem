#include <iostream>
using namespace std;

int main() {

    int x ,y;
    cin >> x >> y;

    if(x%2==0)
    {
        c = x/2;
        if(c%y==0) cout << "YES"<<endl;
        else cout << "NO"<<endl;
    }
    else if (x%2!=0)
    {
        c=x/2;
    }


    return 0;
}


