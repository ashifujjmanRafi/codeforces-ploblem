#include <iostream>
using namespace std;

int main() {

    string tex;
    //int j=0;
    //char x[]={'H','Q','9','+'};
    cin >> tex;
    for(int i =0;i<tex.size();i++)
    {
        if(tex[i]=='H' || tex[i]=='Q'||tex[i]=='9')
        {
            cout << "YES"<<endl;
            return 0;
        }
    }
    cout << "NO"<<endl;

    return 0;
}


