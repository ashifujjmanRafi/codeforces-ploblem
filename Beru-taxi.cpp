#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int a,b,x,y,t,n,sum=0;
    double ti,m=1000000000;
    cin >> a >>b >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x >> y >> t;

        ti =  hypot(x - a, y - b ) / t;


        m=min(ti,m);

        sum =0;
    }
    printf("%.10f\n",m);

    return 0;
}


