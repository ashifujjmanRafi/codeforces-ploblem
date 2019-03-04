#include <iostream>
using namespace std;
int main()
{
    int i,j,count;
    string n;
    cin >> n;
    for(i=0;i<n.size()-6;i++)
    {
     if (n[i]=='0' && n[i+1]=='0' && n[i+2]=='0' && n[i+3]=='0' && n[i+4]=='0' && n[i+5]=='0' && n[i+6]=='0')
        {
            count=7;
            break;
        }
     if (n[i]=='1' && n[i+1]=='1' && n[i+2]=='1' && n[i+3]=='1' && n[i+4]=='1' && n[i+5]=='1' && n[i+6]=='1')
        {
            count=7;
            break;
        }
    }
    if(count==7)
    {
     cout << "YES \n";
    }
    else
    {
        cout << "NO \n";
    }
    return 0;
}
