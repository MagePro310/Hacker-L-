#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *input = new int[n];
    map<int, int> count;
    for (int i = 0; i < n; ++i)
    {
        cin >> input[i];
        ++count[input[i]];
    }
    for (int i = 0; i < n; ++i)
    {
        cout << count[input[i]] << ' ';
    }
    return 0;
}
