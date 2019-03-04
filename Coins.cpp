#include <iostream>
using namespace std;

int main() {

    int n;
    long long x,count=0;
    cin >> n >> x;
    if(x>n)
    {
       count= x%n;
       if(count==0) cout << x/n<< endl;
       else cout << (x/n)+1<<endl;
    }
    else cout << 1 <<endl;


    return 0;
}


