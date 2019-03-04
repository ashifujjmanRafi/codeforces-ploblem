#include <iostream>
using namespace std;

int main() {
    int c1=0,c2=0;

    int n;

    cin >> n;

    char x;

    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x=='D') c1++;

        else if (x=='A') c2++;


    }
    if(c1>c2) cout << "Danik" << endl;

    else if(c1==c2) cout << "Friendship"<<endl;

    else cout << "Anton" << endl;


    return 0;
}


