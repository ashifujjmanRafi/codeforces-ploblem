#include <iostream>
using namespace std;

int main() {

    long long  count=0,x,n=0,a=0;
  //  string m ={"123456789"};



    cin >> x;
    n=x;

    while(n>0)
    {
        a=n%10;
        n=n/10;

        if(a==4|| a==7)
        {
            count++;
        }


    }
    if (count == 4|| count==7 )
    {
        cout << "YES"<<endl;
    }
    else cout << "NO" << endl;

    return 0;
}


