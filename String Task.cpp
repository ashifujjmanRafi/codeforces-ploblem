#include <iostream>
using namespace std;
int main()

{
 int i,j;

 string s;

 cin >> s;

 for(i=0;i<s.size();i++)
 {
     if(s[i]>=65 && s[i] <= 90) s[i]= 'a' + (s[i]-'A');


    if(s[i]=='a'|| s[i]=='e' || s[i]=='i'|| s[i]=='o'|| s[i]=='u' || s[i]=='y') continue;
    else cout << "." << s[i];

 }



 return 0;

}
