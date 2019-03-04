#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    long long i,j,k,a[4],fo;
   fo= pow(10,9);

    cin >> i >> j >> k;

  a[0]  =(i*2)+(j*2);
  a[2]=(2*i )+( 2*k);
  a[3]=( 2*j)+(2*k);

  a[1]  = i+j+k;
  for(int x= 0;x<4;x++)
  {
      if(a[x]<fo) fo =a[x];
  }

    cout << fo;

    return 0;
}

