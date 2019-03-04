#include <iostream>
using namespace std;

int main() {

    int k,a,b,i=0;
    long long count=0;

    cin >> k;
     for(i=1;i<=k;i++)
     {
         cin >> a;

         for(int j=0;j<a;j++)
         {
             cin >> b;
            if(b>0) count+=b;
             else continue;
         }

       cout <<"Case "<<i<<": "<< count << endl;
        count=0;
     }


    return 0;
}


