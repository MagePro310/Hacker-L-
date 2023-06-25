#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int n, k;
    cin >> s >> n >> k;
    int len = s.length() - 1;
    int count_cheese = 0;
    int count_trap = 0;
    int count_stomach = 0;
    int time = 0;
    bool success = true;
    for (int i = 0; i < len; ++i)
    {
        ++time;
        if (s[i] == '*')
        {
            count_trap = 0;
            ++count_cheese;
            ++count_stomach;
            if (count_cheese > k)
            {
                success = false;
                break;
            }
            else if (count_stomach == n)
            {
                time += n;
                count_stomach = 0;
            }
        }
        else
        {
            count_cheese = 0;
            ++count_trap;
            if (count_trap > k)
            {
                success = false;
                break;
            }
            else if (count_stomach > 0)
            {
                --count_stomach;
            }
        }
    }
    ++time;
    if (s[len] == '*')
    {
        count_trap = 0;
        ++count_cheese;
        ++count_stomach;
        if (count_cheese > k)
        {
            success = false;
        }
    }
    else
    {
        count_cheese = 0;
        ++count_trap;
        if (count_trap > k)
        {
            success = false;
        }
    }
    if (success == true)
        cout << time;
    else
        cout << "FAIL";
    return 0;
}
