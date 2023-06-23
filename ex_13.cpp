#include <iostream>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int result = 0;
    int tem;
    for (int i = 0; i < n; ++i)
    {
        cin >> tem;
        result ^= tem;
    }
    if (n % 2 != 0)
    {
        for (int i = 0; i < q; ++i)
        {
            cin >> tem;
            result ^= tem;
        }
    }
    cout << result;
    return 0;
}
