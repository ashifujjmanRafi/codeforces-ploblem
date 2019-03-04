#include <iostream>
using namespace std;

int main() {

    long long t;
    cin >> t;
    long long n;
    long long res=0,i;
    for(int  j=1;j<=t;j++)
    {
        cin >> n;
        for(i=1;i<=n;i++)
        {
            res = res + n / i;
        }
       printf("Case %d: %lld",j,res);
       res=0;
    }



    return 0;
}


