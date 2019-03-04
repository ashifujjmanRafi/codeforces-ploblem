#include <iostream>

using namespace std;

int main()
{
    int i,tc;

    string s;

    cin>> tc;

    for(i=0;i<tc;i++)
    {
        cin>> s;

        if(s.size()>10)
        {
            cout << s[0] << s.size()-2 << s[s.size()-1]<< "\n";
        }

    else
    {
        cout << s << "\n";
    }
    }

    return 0;

}
