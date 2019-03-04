#include <iostream>
using namespace std;
int main()
{
    int i,x,y,m,j,cou2=0;

    cin >> m ;

    for(i=0;i<m;i++)
    {
     cin >> x >> y >> j;
     if(x+y+j>=2)
     {
         cou2++;


     }
    }
    cout << cou2 << "\n";
    return 0;
}

