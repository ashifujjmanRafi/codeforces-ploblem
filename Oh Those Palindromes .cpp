#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;

    cin >>n;

    char  ar[n];

    for(int i=0;i<n;i++) {

    cin >> ar[i];
    }

     sort(ar, ar+sizeof(ar));

     for(int i=0;i<n;i++) {

    cout << ar[i];
    }


    return 0;
}


