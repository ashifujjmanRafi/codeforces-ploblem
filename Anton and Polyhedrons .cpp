#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,count=0;
     cin >> n;

     string s;
     for(int i=0;i <n;i++)
     {
         cin >> s;
         if(s=="Icosahedron") count+=20;

         else if(s=="Dodecahedron") count+=12;

         else if( s=="Tetrahedron") count += 4;

        else if(s=="Cube") count+=6;

        else if(s=="Octahedron") count+=8;



        else count=0;
     }

        cout << count << endl;
    return 0;
}


