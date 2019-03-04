#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,c1=0,c2=0,d;
    cin >> x;
    int a[x];
    for(int y=0;y <x;y++)
    {
        cin >> a[y];
        if(a[y]==1) c1++;
        else c2++;

    }
    if(c1>1&&c2==0)d=c1/3;
    else
    {
        /*if(c1>c2)
        {
            d =c2;
            if((c1-c2)>=3) d = c2 + (c1-c2)/3;
        }
        else
        d = c1;*/
        d= min (c1,c2);
        d= d+ (c1-d)/3;

    }
    cout << d << endl;


    return 0;
}


