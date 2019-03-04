#include <iostream>
using namespace std;

int main() {

    int k,n,w,nm=0;

    cin >>k >> n >> w;

    for(int i=1; i <=w;i++)
    {
       nm =nm+i*k;
    }
    if(nm>n)
    cout <<nm-n << endl;
    else cout << '0'<< endl;

    return 0;
}


