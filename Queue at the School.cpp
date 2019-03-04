#include <iostream>
using namespace std;

int main() {
    int a,t;
    cin >> a >> t;
    char x[a];

    for(int i=0;i<a;i++)
    {
        cin >> x[i];

    }
    for(int j=0;j<t;j++)
        {
            for(int i=0;i<a;i++){
           if(x[i]=='B' && x[i+1]=='G')
            {
                x[i]='G';
                x[i+1]='B';
                i++;
            }
            }
        }

    for(int i=0;i<a;i++)
    {
        cout << x[i];

    }
    return 0;
}

