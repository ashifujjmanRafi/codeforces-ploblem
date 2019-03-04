#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,x,y,z,c1=0,c2=0,c3=0;

    cin >> n;

    for(int i=1;i<=n ;i++)
    {
        cin >> x >> y >> z;
        c1=c1+x;
        c2=c2+y;
        c3=c3+z;
    }
    if(c1== 0 &&c2==0 && c3==0) cout << "YES" << endl;

    else cout << "NO"<<endl;



    return 0;
}


