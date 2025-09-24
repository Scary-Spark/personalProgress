// https://cses.fi/problemset/task/1083

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n - 1; i++)
    {
        int t;
        cin >> t;
        nums.push_back(t);
    }
    sort(nums.begin(), nums.end());

    int ans = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if ((i + 1) != nums.at(i))
        {
            ans = i + 1;
            break;
        }
    }

    if (ans == -1)
        cout << n << endl;
    else
        cout << ans << endl;
}