#include <iostream>
using namespace std;

int main() {

    int n,a,b,x1=0,x2=0;

    cin >> n;

    for(int i=0;i <n;i++)
    {
        cin >> a >> b;

       if(a!=0)
       {
           b=(b-a)+b;
           if(b>x2) x2=b;
       }
    }
    cout << x2 << endl;

    return 0;
}


