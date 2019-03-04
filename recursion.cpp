#include <iostream>
using namespace std;

/*int sum (int n){

    if(n==0) return 0;

    return n + sum (n-1);


}*/
long long n,r,j;
long long power(long long n, long long r)
{   long long x;
    if(r==0) return 1;
    if(r==1) return n%j;
    if(r%2==1){
        return ( n%j ) * power(n,r-1)%j;
    }
    else{
        x=power(n,r/2);

        return (x*x)%j;
    }
}


int main() {
    //freopen("in.txt", "rt", stdin);
    while(cin >> n >> r >> j) {
        long long ans = power(n, r);

        cout << ans << endl;

    }

    return 0;
}


