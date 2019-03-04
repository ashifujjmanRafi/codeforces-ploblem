#include <iostream>
using namespace std;

int main() {

    int n,m,x,count=0;
    cin >> n >> m;

    for(int i=0;i<n;i++)
    {
        cin >> x;

        if(x>m) count=count+2;
        else count++;

    }
    cout << count << endl;

    return 0;
}


