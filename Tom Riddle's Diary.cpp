#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    string name[n];
    int x[n];

    for(int i=0;i < n;i++)
    {
        x[i]=0;

        cin>> name[i];
        if(i!=0)
        {

            for(int j=0;j<i;j++)
                {
                if(name[i] == name[j])
                    {
                        x[i]=1;
                        break;
                    }

                }
        }
     if(x[i]==1) cout << "YES" << endl;
      else cout << "NO"<<endl;
    }




    return 0;
}


