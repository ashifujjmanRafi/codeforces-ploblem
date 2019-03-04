#include <iostream>
using namespace std;

int main() {

    int n,m,x=0;
    cin >> n >> m;
    if(n<m) x=n;
    else x=m;
    if(x%2==0) cout << "Malvika"<<endl;

    else cout << "Akshat"<<endl;


    return 0;
}


