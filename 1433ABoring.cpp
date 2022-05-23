#include <iostream>
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>

#define print(x)                \
    {                           \
        for (auto ait : x)      \
            cout << ait << " "; \
        cout << "\n";           \
    }
using namespace std;

auto above(int threshold)
{
    return [=](int value)
    {
        return value >= threshold;
    };
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int t;
    cin >> t;
    vector<string> values;
    for (int i = 1; i <= 10; i++)
    {

        for (int j = 1; j <= 4; j++)
        {
            string ans = "";
            for (int k = 1; k <= j; k++)
            {

                ans += to_string(i);
            }
            values.push_back(ans);
            // cout<<" ";
        }
        // cout<<endl;
    }
    while (t--)
    {
        string n;
        cin >> n;
        int digits = 0;
        for (auto i : values)
        {
            if (i == n)
            {
                digits += i.length();
                break;
            }
            else
            {
                digits += i.length();
            }
        }
        cout << digits << endl;
    }
    return 0;
}