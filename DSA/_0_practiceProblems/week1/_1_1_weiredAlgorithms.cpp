// https://cses.fi/problemset/task/1068/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long n;
    cin >> n;
    vector<long> ans;
    ans.push_back(n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            ans.push_back(n);
            continue;
        }
        n = (n * 3) + 1;
        ans.push_back(n);
    }

    for (long i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}