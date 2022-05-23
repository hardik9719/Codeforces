#include <iostream>
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define ll long long

#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define printf(x)               \
    {                           \
        for (auto ait : x)      \
            cout << ait << " "; \
        cout << "\n";           \
    }
#define input(n)  \
    {             \
        cin >> n; \
    }
#define fo(i, n) for (int i = 0; i < n; i++)
#define intinputvector()         \
    {                            \
        cin >> temp;             \
        numbers.push_back(temp); \
    }                            \
    }

auto above(int threshold)
{
    return [=](int value)
    {
        return value >= threshold;
    };
};

int main(int argc, char **argv)
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> values;
        fo(i, n)
        {
            int temp;
            cin >> temp;
            values.push_back(temp);
        }
        int steps = 0;
        int max_value = *max_element(values.begin(), values.end());
        int min_value = *min_element(values.begin(), values.end());
        steps = max_value - min_value;
        // int array_length = values.size();
        // while (1)
        // {
        //     if (count(values.begin(), values.end(), max_value) == array_length)
        //     {
        //         break;
        //     }
        //     fo(i, n)
        //     {
        //         if (values[i] != max_value)
        //         {
        //             values[i]++;
        //         }
        //     }
        //     steps++;
        // }
        cout << steps << endl;
    }
    return 0;
}