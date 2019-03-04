#include <iostream>
using namespace std;

int main() {

    int t,x;

    cin >> t;

    for(int i=0;i<t;i++)
    {
      cin >> x;
      if(x%7==0) cout << x/7 << endl;
      else cout << (x/7)+1<<endl;
    }


    return 0;
}


