#include <iostream>
using namespace std;
int main()

{
 int i,j;

 string s1,s2;

 cin >> s1 >> s2;

 for(i=0;i<s1.size();i++)
 {
     if(s1[i]>=65 && s1[i] <= 90)

        s1[i]= s1[i]+32;

     if(s2[i]>= 65 && s2[i]<= 90)

        s2[i]= s2[i]+32;


    cout << s1.compare(s2)<<"\n";



    if
    {


        if(s1[i]>s2[i])
        {
        cout << 1 << "\n";
        break;
        }
        else if(s1[i]<s2[i])
        {
        cout << -1 << "\n";
        break;
        }

    }
 }




  return 0;

}
