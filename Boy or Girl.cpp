#include <iostream>
using namespace std;

int main() {

    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string s;
    int count = 0;

    cin >> s;

    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<alpha.size();j++)
        {
            if(s[i]==alpha[j]) alpha[j] ='0';

        }

    }
    for(int x=0 ; x<alpha.size() ; x++)
    {
        if(alpha[x]=='0')
            count++;

    }
    //cout << count << endl;

    if(count%2==0) cout << "CHAT WITH HER!\n";

    else cout << "IGNORE HIM!\n" ;

    return 0;
}



