#include <iostream>
using namespace std;

int main() {
    int n,mx=10,mi=0,y=0;
    cin >> n;
    int x[n];
    for(int i=1;i<n;i++)
    {
        cin >> x[i];
        if(x[i]<mx) mx=x[i];
        if(x[i]>mi) mi = x[i];
    }
    y=mi+mx;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i]+x[j]==y) cout << i << j << endl;
        }

    }



    return 0;
}


