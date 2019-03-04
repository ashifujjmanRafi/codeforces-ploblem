#include <iostream>
using namespace std;

int main() {
    int s,n,x,y,count=0;
    cin >> s >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x >> y;

        if(s > x)
        {
            s = s+y;
            count++;
        }
        else
        {
            cout << "NO \n";
            break;
        }
          x=0,y=0;

    }
    if(count==n)
    {
        cout << "YES \n";
    }


    return 0;
}


