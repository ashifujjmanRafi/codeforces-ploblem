#include <iostream>
#include<algorithm>
using namespace std;

int main() {

    int x,c1=0,c2=0;
    cin >> x;
    int ar[x];
    for(int i=0;i<x;i++)
    {
        cin >> ar[i];
        c1+=ar[i];


    }
    sort(ar,ar+x);
    reverse(ar,ar+x);
    int j=0;
        for( j=0;j<x;j++)
    {   c2+=ar[j];

        if(c2>(c1/2))
        {
            break;
        }

    }
    cout << j +1 << endl;



    return 0;
}


