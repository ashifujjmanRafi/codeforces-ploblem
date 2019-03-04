#include  <iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    string x;
    cin >> n;
    for(i=0;i<n;i++)
    {
     cin >> x;
     if(x[1]=='+')
     {
         count++;
     }
     else
     {
         count--;
     }

    }
    cout << count << "\n";
    return 0;
}
