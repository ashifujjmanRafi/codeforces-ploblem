#include <iostream>
using namespace std;
int main()
{
    int x,count=0,fo=0;

    cin >> x;

    int ar[x];

    for(int i=0;i < x;i++)
    {
        cin >> ar[i];


     if(ar[i-1]<=ar[i]&&i!=0)
     {
         count++;
        if(count >fo)
        {
            fo = count;

        }

     }
    else count = 0;
    }
    cout << fo+1 << endl;
}


