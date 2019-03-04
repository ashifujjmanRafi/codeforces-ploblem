#include <iostream>
using namespace std;

int main() {

    int count=0;
    char x[6]= "hello";

    string s;

    cin >> s;

    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<6;j++)
            {
        if(s[i]==x[j])
        {
            s[i]=='0';

        }

        }
        cout << s[i];
    }

    cout << count;
    //if(count=='5') cout << "YES \n";
    //else cout << "NO \n";

    return 0;
}


