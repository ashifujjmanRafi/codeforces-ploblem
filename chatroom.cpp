#include <iostream>
using namespace std;

int main() {

    char x[]={'h','e','l','l','o' };
    string s;
    int a=0;
    cin >> s;
     for(int i=0;i<s.size();i++)
     {
         if(s[i]==x[a])
         {
             a++;
         }
         if(a>=5)

            {
             cout << "YES"<< endl;

            return 0;
            }
     }
     cout << "NO"<<endl;


    return 0;
}


