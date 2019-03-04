#include <iostream>
using namespace std;

int main()
 {
    int n,x,y,c1=0,c2=0;

    cin >> n;
    x=0;
    y=0;
    for(int i=0;i<n;i++)
    {
        cin >> x >> y;

        if(x>y) c1++;
        else if(y>x) c2++;

    }
    if (c1>c2) cout <<"Mishka" << endl;

    else if(c1<c2) cout << "Chris" << endl;

    else cout << "Friendship is magic!^^" << endl;

    return 0;
}


