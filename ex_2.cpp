#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << (((((n / 2) % 2027) * (n % 2027)) % 2027) * ((n - 1) % 2027) + ((n / 2) % 2027) * ((n + 1) % 2027)) % 2027;
    }
    else
    {
        cout << ((((((n - 1) / 2) % 2027) * (n % 2027)) % 2027) * (n % 2027) + (n % 2027) * (((n + 1) / 2) % 2027)) % 2027;
    }
    return 0;
}
