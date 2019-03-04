#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> ct;
    int x,y;

    while((cin>>x),x)
    {
        for(int i=1;i<=x;i++)
        {
            ct.push(i);
        }
        cout<<"Discarded cards:";
        while(ct.size()>1)
        {
            cout <<ct.front();
            ct.pop();
            x=ct.front();
            ct.pop();
            if (!ct.empty())
				printf(",");
			ct.push(x);
        }
        printf("\nRemaining card: %d\n", ct.front());
		ct.pop();
    }


    return 0;
}


