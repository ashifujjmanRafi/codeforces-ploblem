#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int x,p,q,fq[110],n,y;

    cin >> x >> p >> q;

    for(int i=1;i<=p;i++)
    {
        cin >> n;
        fq[n]++;
    }
    for(int j=1;j<=q;j++)
    {
        cin >> n;
        fq[n]++;
    }
    for(int k=1;k<=x;k++)
    {
        if(fq[k]==0)
        {
            cout << "Oh, my keyboard!"<< endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;


    return 0;
}


