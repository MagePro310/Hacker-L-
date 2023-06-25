#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int N;
    int pre, input, sum;
    while (T > 0)
    {
        cin >> N >> input >> pre;
        N -= 2;
        sum = input + pre;
        while (N > 0)
        {
            cin >> input;
            if (input + pre > sum)
            {
                sum = input + pre;
            }
            pre = input;
            --N;
        }
        cout << sum << endl;
        --T;
    }
    return 0;
}
