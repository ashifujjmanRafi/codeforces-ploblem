#include <iostream>
using namespace std;

int main() {

    int x,count=0;

    cin >> x;

    int a[x];

    for(int i=0;i<x;i++)
    {
        cin >> a[i];
        if(a[i]==1)
        {
            cout << "HARD"<<endl;
            break;
        }
        else count++;
    }
    if(count==x) cout << "EASY"<<endl;



    return 0;
}


