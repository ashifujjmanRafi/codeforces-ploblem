#include <iostream>
 using namespace std;
 int main()
 {
         long long n,k,count=0,red=0,green=0,blue=0;

    cin >> n >> k;

    red=(n*2)/k;
    if((n*2)%k!=0) red=red+1;
    green=(n*5)/k;
    if((n*5)%k!=0) green=green+1;
    blue=(n*8)/k;
    if((n*8)%k!=0) blue=blue+1;
    count = red+blue+green;
    cout <<  count << endl;
    return 0;
 }
