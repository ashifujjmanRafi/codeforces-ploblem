#include <iostream>
using namespace std;

int main() {

    int x,count=0;
    cin >> x;
     string s;
    cin >> s;
     for(int j=1;j<s.size();j++)
     {
         if (s[j] != s[j - 1])
         {
             cout << "YES"<<endl;
             cout << s[j-1];
             cout << s[j]<<endl;
            return 0;
         }


     }
     cout << "NO"<<endl;

}


