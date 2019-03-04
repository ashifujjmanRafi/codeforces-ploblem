#include <iostream>
using namespace std;
int main()
{
    int i,x,y,j,cou1=0,cou2=0;

    cin >> x ;

    for(i=0;i<x;i++)
    {
         cou1 = 0;
    for(j=0;j<3;j++)
    {
        cin >> y;
        if(y==1)
        {
            cou1++;
        }
    }

     if (cou1>=2)
     {
         cou2++;
     }
    }
    cout << cou2 << "\n";
    return 0;
}
