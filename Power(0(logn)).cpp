#include<iostream>
#define ll long long int
#define ui unsigned int
using namespace std;
int main()
{

    ll a;
    ll b;
    cin >> a >> b;
    if (a == 0) {
        cout << 0;
        return 0;
    }

    ll amultiple = a;
    ll ans = 1;

    while (b)
    {
        if (b & 1)
            ans *= amultiple;
        amultiple *= amultiple;
        b = b >> 1;
    }
    cout << ans;
}
