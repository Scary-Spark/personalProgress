// https://cses.fi/problemset/task/1069

#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>

using namespace std;
int main()
{
    string s;
    cin >> s;

    char previous = s.at(0);
    int count = 1;
    int ans = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s.at(i) == previous)
        {
            count++;
        }
        else
        {
            ans = max(count, ans);
            count = 1;
            previous = s.at(i);
        }
    }
    ans = max(ans, count);
    cout << ans << endl;
}