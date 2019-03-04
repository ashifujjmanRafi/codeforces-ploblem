#include <iostream>
using namespace std;
int main()
{
    long long a,b,k,c1=0;
    int i,j,t;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> a>>b>>k;
        if(k%2==0)
        {
            c1=(a*(k/2))-(b*(k/2));
        }
        else
        {

            c1=(a*(k/2))-(b*(k/2));
            c1=c1+a;
        }

        cout << c1<< endl;

    }

}
