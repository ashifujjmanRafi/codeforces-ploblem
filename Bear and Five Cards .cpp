#include <iostream>
using namespace std;

int x[105];

int main() {

    int n,i,y=0,count=0,m=0,b;
    for(i=0;i<5;i++)
    {
        cin >> n;
        x[n]++;


        count+=n;
    }
    for(i=1;i<105;i++)
    {
        if(x[i]>1)

        {
            if(x[i]<4)
            {
           b=x[i]*i;
           if(b>m) m=b;
            }
            else
            {

            b= i*3;
            if(b>m) m=b;
            }
        }

    }


    cout << count - m << endl;




    return 0;
}


